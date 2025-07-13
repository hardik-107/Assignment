from django import forms
from .models import Product, ProductSubCategory

class ProductForm(forms.ModelForm):
    class Meta:
        model = Product
        fields = ['product_name']

class ProductSubCatForm(forms.ModelForm):
    class Meta:
        model = ProductSubCategory
        fields = ['product', 'price', 'image', 'model', 'ram']
