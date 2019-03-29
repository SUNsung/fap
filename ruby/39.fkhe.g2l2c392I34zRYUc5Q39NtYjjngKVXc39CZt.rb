
        
            DATA_URL = 'data:'.freeze
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
        def initialize
      @pages = {}
    end
    
        DOCUMENT_RGX = /\A(?:\s|(?:<!--.*?-->))*<(?:\!doctype|html)/i
    
          def filters
        html_filters.to_a + text_filters.to_a
      end
    
      def set_account
    @account = Account.find_local!(params[:account_username])
  end
    
              redirect_to admin_reports_path, notice: I18n.t('admin.reports.resolved_msg')
          return
        end
    
      it 'raises #{frozen_error_class} on an untainted, frozen object' do
    o = Object.new.freeze
    lambda { o.taint }.should raise_error(frozen_error_class)
  end
    
    desc 'generates TOC'
task :toc, [:readme] do |t, a|
  a.with_defaults :readme => 'README.md'
    
          def origin(env)
        env['HTTP_ORIGIN'] || env['HTTP_X_ORIGIN']
      end
    
          def csp_policy
        directives = []
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
      it 'should ignore CSP3 no arg directives unless they are set to true' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => false, :disown_opener => 'false', :upgrade_insecure_requests => 'foo'