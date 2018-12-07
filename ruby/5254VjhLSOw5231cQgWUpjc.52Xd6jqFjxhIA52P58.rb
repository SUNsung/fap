
        
        
    it 'work without the FAILED_JOBS_TO_KEEP env variable' do
      old = ENV['FAILED_JOBS_TO_KEEP']
      ENV['FAILED_JOBS_TO_KEEP'] = nil
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(0)
      ENV['FAILED_JOBS_TO_KEEP'] = old
    end
  end
    
        it 'returns nil when the path cannot be followed' do
      expect(Utils.value_at({ :foo => { :bar => :baz }}, 'foo.bing')).to be_nil
    end
  end
    
        it 'requires an agent' do
      @log.agent = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:agent)
    end
    
      # staged_path not available in Installer/Uninstall Stanza, workaround by nesting with preflight/postflight
  # see https://github.com/Homebrew/homebrew-cask/pull/8887
  # and https://github.com/Homebrew/homebrew-cask-versions/pull/296
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
          def partial(name)
        if name == :author_template
          self.class.partial('history_authors/#{@page.wiki.user_icons}')
        else
          super
        end
      end
    
    $contexts = []
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
      test 'heavy use 2' do
    post '/create', :content => '한글 text', :page => 'k',
         :format             => 'markdown', :message => 'def'
    follow_redirect!
    assert last_response.ok?
    
      # replace name version and date
  replace_header(head, :name)
  replace_header(head, :version)
  replace_header(head, :date)
  #comment this out if your rubyforge_project has a different name
  replace_header(head, :rubyforge_project)
    
    # external
require 'github/markup'
require 'sanitize'
    
            def scope
          if params[:product_id]
            Spree::Product.friendly.find(params[:product_id])
          elsif params[:variant_id]
            Spree::Variant.find(params[:variant_id])
          end
        end
      end
    end
  end
end

    
              @properties = if params[:ids]
                          @properties.where(id: params[:ids].split(',').flatten)
                        else
                          @properties.ransack(params[:q]).result
                        end
    
            def variant
          @variant ||= Spree::Variant.unscoped.find(params.fetch(:variant_id))
        end
    
            def products
          # Returns the products sorted by their position with the classification
          # Products#index does not do the sorting.
          taxon = Spree::Taxon.find(params[:id])
          @products = taxon.products.ransack(params[:q]).result
          @products = @products.page(params[:page]).per(params[:per_page] || 500)
          render 'spree/api/v1/products/index'
        end