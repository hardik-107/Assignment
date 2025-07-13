from django.db import models

class Product(models.Model):  # Product_mst
    product_id = models.AutoField(primary_key=True)
    product_name = models.CharField(max_length=100)

    def __str__(self):
        return self.product_name

class ProductSubCategory(models.Model):  # Product_sub_cat
    product = models.ForeignKey(Product, on_delete=models.CASCADE)
    price = models.FloatField()
    image = models.ImageField(upload_to='product_images/')
    model = models.CharField(max_length=100)
    ram = models.CharField(max_length=50)

    def __str__(self):
        return f"{self.product.product_name} - {self.model}"
