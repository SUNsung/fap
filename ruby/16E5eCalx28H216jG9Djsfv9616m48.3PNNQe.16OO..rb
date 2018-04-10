
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
    module Jekyll
  binding.pry
end

    
            c.action do |args, opts|
          Jekyll::Commands::NewTheme.process(args, opts)
        end
      end
    end
    
          private
    
      def object_url
    return if @object['url'].blank?
    
        def matching_username
      Account.where(Account.arel_table[:username].lower.eq username.to_s.downcase)
    end
    
      describe 'GET #show' do
    it 'returns http success' do
      get :show
      expect(response).to have_http_status(:success)
    end
  end
    
        def register_lotus
      Lotus::Assets.sources << assets_path
    end
    
        # These mixins will get vararg definitions in SCSS (not supported by LESS):
    VARARG_MIXINS               = %w(
      scale transition transition-duration transition-property transition-transform box-shadow
    )
    
      # Force all access to the app over SSL, use Strict-Transport-Security, and use secure cookies.
  # config.force_ssl = true