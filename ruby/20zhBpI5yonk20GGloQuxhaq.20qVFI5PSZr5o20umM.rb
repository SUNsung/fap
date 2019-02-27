
        
                  def render_collection_for(builder_class, &block)
            options = @options.stringify_keys
            rendered_collection = render_collection do |item, value, text, default_html_options|
              builder = instantiate_builder(builder_class, item, value, text, default_html_options)
    
          def self.symbols
        type_klass::SET.symbols
      end
    end
  end
end

    
          private
        def self.layout(formats)
          find_template(name.underscore, { formats: formats }, { _prefixes: ['layouts'] })
        rescue ActionView::MissingTemplate
          begin
            find_template('application', { formats: formats }, { _prefixes: ['layouts'] })
          rescue ActionView::MissingTemplate
          end
        end
    
          helper :abc
    
        def length
      @entries.length
    end
    
        def links
      context[:links]
    end
    
        def insert_after(index, *names)
      insert assert_index(index) + 1, *names
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
        def blank?
      body.blank?
    end
    
          def mod
        return @mod if defined?(@mod)
        @mod = slug[/api\/([\w\-\.]+)\//, 1]
        @mod.remove! 'angular2.' if @mod
        @mod
      end
    end
  end
end

    
            css('pre > code').each do |node|
          node['class'] ||= ''
          lang = if node['class'].include?('lang-html') || node.content =~ /\A</
            'html'
          elsif node['class'].include?('lang-css')
            'css'
          elsif node['class'].include?('lang-js') || node['class'].include?('lang-javascript')
            'javascript'
          end
          node.parent['data-language'] = lang if lang
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
          def scm_name
        fetch(:scm)
      end
    
        before do
      allow_any_instance_of(Spree::Api::V2::Storefront::CartController).to receive(:spree_current_order).and_return(order)
      patch '/api/v2/storefront/cart/empty', headers: headers_bearer
    end
    
        context 'with params 'include=default_billing_address'' do
      before { get '/api/v2/storefront/account?include=default_billing_address', headers: headers }
    
          it 'does not return country second time if it appears in multiple zones' do
        zone.countries << country
        shipping_method.zones << zone
        get shippable_url
        expect(json_response['data'].size).to eq(to_return.size)
      end
    
              private
    
              scope = scope.not_deleted unless params[:show_deleted]
          scope = scope.not_discontinued unless params[:show_discontinued]
        else
          scope = Product.accessible_by(current_ability, :read).active.includes(*product_includes)
        end
    
      opts.separator ''
  opts.separator 'Options:'
    
      def async_create_archive(branch)
    Resque.enqueue(Archive, self.id, branch)
  end
    
          # The string name of the queue from which the failed job was pulled
      attr_accessor :queue
    
          def self.requeue_all
        queues.each { |queue| requeue_queue(Resque::Failure.job_queue_name(queue)) }
      end