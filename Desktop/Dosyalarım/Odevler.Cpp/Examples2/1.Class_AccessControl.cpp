class sinif {
  // Sadece sınıf fonksiyonlarının erişebileceği private değişkenler
  private:  
    int priid;
  // Sadece sınıf fonksiyonları ile türetilmiş sınıf fonksiyonlarının erişebileceği private değişkenler
  protected:  
    int proid;	
  // Sınıf fonksiyonları, türetilmiş sınıf fonksiyonları ve sınıf nesneleri erşim sağlayabilir.
  public: 
    int pubid;
	void deger_ata(int pid1, int pid2, int pid3);
    void deger_goster();
};