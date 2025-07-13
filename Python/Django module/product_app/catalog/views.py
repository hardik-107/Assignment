from django.http import HttpResponse, JsonResponse
from .models import ProductSubCategory
from django.db.models import Q

# 🏠 Home view
def home(request):
    return HttpResponse("""
        <h2>Welcome to the Product App API</h2>
        <ul>
            <li><a href='/products/'>/products/</a> → JSON list of all products</li>
            <li><a href='/products/html/'>/products/html/</a> → Visual view of products</li>
            <li>Use <code>/search/?q=samsung</code> → To search products</li>
        </ul>
    """)

# 📦 JSON View: All products
def view_all_products(request):
    products = ProductSubCategory.objects.select_related('product').all()
    data = []
    for p in products:
        data.append({
            'product_name': p.product.product_name,
            'model': p.model,
            'price': p.price,
            'ram': p.ram,
            'image_url': request.build_absolute_uri(p.image.url) if p.image else None
        })
    return JsonResponse({'products': data})

# 🔍 JSON View: Search products
def search_product(request):
    query = request.GET.get('q', '')
    results = ProductSubCategory.objects.filter(
        Q(product__product_name__icontains=query) | Q(model__icontains=query)
    ).select_related('product')

    data = []
    for r in results:
        data.append({
            'product_name': r.product.product_name,
            'model': r.model,
            'price': r.price,
            'ram': r.ram,
            'image_url': request.build_absolute_uri(r.image.url) if r.image else None
        })
    return JsonResponse({'results': data})

# 🖼️ HTML View: Organised display
def view_all_products_html(request):
    products = ProductSubCategory.objects.select_related('product').all()

    html = """
    <h2>Product List</h2>
    <style>
        .product-card {
            border: 1px solid #ccc;
            padding: 10px;
            margin: 10px;
            width: 300px;
            border-radius: 10px;
            box-shadow: 2px 2px 5px rgba(0,0,0,0.1);
        }
        img {
            max-width: 100%;
            height: auto;
        }
    </style>
    <div style='display: flex; flex-wrap: wrap; gap: 20px'>
    """

    for p in products:
        html += f"""
        <div class='product-card'>
            <h3>{p.product.product_name}</h3>
            <p><strong>Model:</strong> {p.model}</p>
            <p><strong>Price:</strong> ₹{p.price}</p>
            <p><strong>RAM:</strong> {p.ram}</p>
            <p>{'<img src="' + p.image.url + '">' if p.image else 'No image available'}</p>
        </div>
        """

    html += "</div>"
    return HttpResponse(html)
