from django.urls import path
from . import views

urlpatterns = [
    path('', views.home),  # Root path
    path('products/', views.view_all_products, name='view_all_products'),  # JSON view
    path('products/html/', views.view_all_products_html),  # HTML view
    path('search/', views.search_product, name='search_product'),  # Search API
]
