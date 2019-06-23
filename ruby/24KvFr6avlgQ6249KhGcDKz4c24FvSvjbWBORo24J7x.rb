
        
            def later(desc = nil, db = RailsMultisite::ConnectionManagement.current_db, &blk)
      if @async
        start_thread if !@thread&.alive? && !@paused
        @queue << [db, blk, desc]
      else
        blk.call
      end
    end
    
      def report
    @report ||= JSON.parse(request.body.read)['csp-report'].slice(
      'blocked-uri',
      'disposition',
      'document-uri',
      'effective-directive',
      'original-policy',
      'referrer',
      'script-sample',
      'status-code',
      'violated-directive',
      'line-number',
      'source-file'
    )
  end
    
    describe ContentSecurityPolicy::Builder do
  let(:builder) { described_class.new }
    
    class ContentSecurityPolicy
  class Default
    attr_reader :directives
    
      def self.bundle(langs)
    result = File.read(HIGHLIGHTJS_DIR + 'highlight.min.js')
    langs.each do |lang|
      begin
        result << '\n' << File.read(HIGHLIGHTJS_DIR + 'languages/#{lang}.min.js')
      rescue Errno::ENOENT
        # no file, don't care
      end
    end
    
        builder.build
  end
end
    
        def clear_theme_extensions_cache!
      cache.clear
    end
    
          keyword = params.require(:keyword)
      data = SvgSprite.search(keyword)
    
            def collection_method
          :issues_comments
        end
    
      def index
    @broadcasts = Broadcast.all
  end