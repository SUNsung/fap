
        
            it 'calls the specified method when the argument is present' do
      argument = mock()
      mock(argument).to_i { 1 }
      expect(Utils.if_present(argument, :to_i)).to eq(1)
    end
  end
end

    
      describe 'path request must exist' do
    it 'should check that validation added if path does not exist' do
      opts = @opts.tap { |o| o.delete('path') }
      @checker = Agents::AftershipAgent.new(:name => 'tectonic', :options => opts)
      @checker.user = users(:bob)
      expect(@checker.save).to eq false
      expect(@checker.errors.full_messages.first).to eq('You need to specify a path request')
    end
  end
    
        def at_xpath(*args)
      doc.at_xpath(*args)
    end
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
        def add(path, content)
      @pages[path] = content
    end
    
        def build_pages
      history = Set.new initial_urls.map(&:downcase)
      instrument 'running.scraper', urls: initial_urls
    
          def initial_urls
        super + self.class.base_urls[1..-1].deep_dup
      end
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end
    
          def actual_path
        $PROGRAM_NAME
      end
    end
  end
end

    
          def has_footer
        @footer = (@page.footer || false) if @footer.nil? && @page
        !!@footer
      end
    
          def previous_link
      end
    
    def normal(text)
  text.gsub!(' ', '')
  text.gsub!('\n', '')
  text
end
    
      test 'h1 title can be disabled' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
    desc 'Open an irb session preloaded with this library'
task :console do
  sh 'irb -rubygems -r ./lib/#{name}.rb'
end
    
      s.test_files = s.files.select { |path| path =~ /^test\/test_.*\.rb/ }
end

    
            if obj && obj.errors[method].present?
          errors = safe_join(obj.errors[method], '<br />'.html_safe)
          content_tag(:span, errors, class: 'formError')
        else
          ''
        end
      end
    
            context 'receiving shipment can backorder' do
          it 'adds more to the backorder' do
            product.master.stock_items.last.update_column(:backorderable, true)
            product.master.stock_items.last.update_column(:count_on_hand, 0)
            expect(@shipment2.reload.backordered?).to eq(false)
    
              if @order.update_from_params(params, permitted_checkout_attributes, request.headers.env)
            if current_api_user.has_spree_role?('admin') && user_id.present?
              @order.associate_user!(Spree.user_class.find(user_id))
            end
    
            def order
          @order ||= Spree::Order.includes(:line_items).find_by!(number: order_id)
          authorize! :update, @order, order_token
        end
    
            def find_order(lock = false)
          @order = Spree::Order.lock(lock).find_by!(number: params[:id])
        end
    
            def index
          @products = if params[:ids]
                        product_scope.where(id: params[:ids].split(',').flatten)
                      else
                        product_scope.ransack(params[:q]).result
                      end