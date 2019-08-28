
        
        class BugTest < Minitest::Test
  def test_stuff
    assert 'zomg'.present?
    refute ''.present?
  end
end

    
      # Eager load code on boot. This eager loads most of Rails and
  # your application in memory, allowing both threaded web servers
  # and those relying on copy on write to perform better.
  # Rake tasks automatically ignore this option for performance.
  config.eager_load = true
    
          private
        def run_rake_routes
          Dir.chdir(app_path) { `bin/rake routes` }
        end
    end
  end
end

    
          delegate_to Type
    
        it 'returns a hash with the flare tag's bg_color_hex' do
      expect(described_class.new(valid_article).tag_hash.value?('#f3f3f3')).to be true
    end
    
        context 'when organization is present' do
      let(:organization) { create(:organization) }
    
          def is_create_page
        true
      end
    
          # Finds header node inside Nokogiri::HTML document.
      #
      def find_header_node(doc)
        case @page.format
          when :asciidoc
            doc.css('div#gollum-root > h1:first-child')
          when :org
            doc.css('div#gollum-root > p.title:first-child')
          when :pod
            doc.css('div#gollum-root > a.dummyTopAnchor:first-child + h1')
          when :rest
            doc.css('div#gollum-root > div > div > h1:first-child')
          else
            doc.css('div#gollum-root > h1:first-child')
        end
      end
    
        @wiki.write_page(page, :markdown, text,
                     { :name => 'user1', :email => 'user1' });
    
    context 'Precious::Helpers' do
  include Precious::Helpers
    
          page_dir = settings.wiki_options[:page_file_dir].to_s
      unless page_dir.empty?
        # --page-file-dir docs
        # /docs/Home should be created in /Home
        # not /docs/Home because write_page will append /docs
        @path = @path.sub(page_dir, '/') if @path.start_with? page_dir
      end
      @path = clean_path(@path)
    
        # returns the formatted price for the specified variant as a difference from product price
    def variant_price_diff(variant)
      variant_amount = variant.amount_in(current_currency)
      product_amount = variant.product.amount_in(current_currency)
      return if variant_amount == product_amount || product_amount.nil?
    
          I18N_PLURAL_MANY_COUNT = 2.1
      def plural_resource_name(resource_class)
        resource_class.model_name.human(count: I18N_PLURAL_MANY_COUNT)
      end
    
          def void_transaction!
        return true if void?
    
              if completed_at = params.delete(:completed_at)
            order.completed_at = completed_at
            order.state = 'complete'
          end
    
            def new; end
    
            def new; end
    
            def index
          @product_properties = @product.product_properties.accessible_by(current_ability).
                                ransack(params[:q]).result.
                                page(params[:page]).per(params[:per_page])
          respond_with(@product_properties)
        end
    
    def blog_url(user, project, source_dir)
  cname = '#{source_dir}/CNAME'
  url = if File.exists?(cname)
    'http://#{IO.read(cname).strip}'
  else
    'http://#{user.downcase}.github.io'
  end
  url += '/#{project}' unless project == ''
  url
end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
      def set_checkbox(value) # rubocop:disable Naming/AccessorMethodName
    if value && !native['checked']
      native['checked'] = 'checked'
    elsif !value && native['checked']
      native.remove_attribute('checked')
    end
  end
    
    Capybara.register_driver :selenium_safari_not_clear_storage do |app|
  safari_options = {
    browser: :safari,
    options: browser_options
  }
  Capybara::Selenium::Driver.new(app, safari_options.merge(clear_local_storage: false, clear_session_storage: false))
end
    
          def negative_failure_message
        failure_message_helper(' not')
      end
    
          def included(base)
        warn 'including Capybara::DSL in the global scope is not recommended!' if base == Object
        if defined?(::RSpec::Matchers) && base.include?(::RSpec::Matchers)
          base.send(:include, ::Capybara::RSpecMatcherProxies)
        end
        super
      end
    end
  end
    
      it 'should check query options' do
    @session.visit('/with_js?test=test')
    expect(@session).to have_current_path('/with_js?test=test')
  end