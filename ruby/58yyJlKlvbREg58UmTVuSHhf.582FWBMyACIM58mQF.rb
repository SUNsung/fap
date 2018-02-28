
        
            get :redirect_back_with_status
    
            def test_url_sub_key_merges_correctly
          hash = { 'url' => 'abstract://foo?encoding=utf8&', 'adapter' => 'sqlite3', 'host' => 'bar', 'pool' => '3' }
          spec = resolve :production, 'production' => hash
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8',
            'pool'     => '3',
            'name'     => 'production' }, spec)
        end
    
        class Callback2 < ControllerWithCallbacks
      before_action :first
      after_action :second
      around_action :aroundz
    
    require 'abstract_unit'
    
            assert_equal 'summary, title', @controller.response.body
        assert @controller.params.has_key?(:summary)
        assert @controller.params.has_key?(:title)
        assert_equal 'content...', @controller.params['summary']
        assert_equal 'JSON', @controller.params['title']
      end
    end
  end
    
      list = rss_url && !rss_url.empty? ? blogs : unavailable
  list.push(Struct::Blog.new(name, web_url, rss_url))
end
    
      desc 'Build all spree gems'
  task :build do
    pkgdir = File.expand_path('../pkg', __FILE__)
    FileUtils.mkdir_p pkgdir
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end