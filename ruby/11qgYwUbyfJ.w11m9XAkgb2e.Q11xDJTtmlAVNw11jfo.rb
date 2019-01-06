
        
                  def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
        initializer 'action_view.collection_caching', after: 'action_controller.set_configs' do |app|
      PartialRenderer.collection_cache = app.config.action_controller.cache_store
    end
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
        it 'can be turned off' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'false' }
      DefaultScenarioImporter.import(user)
    end
    
      it 'does not raise an error on a tainted, frozen object' do
    o = Object.new.taint.freeze
    o.taint.should equal(o)
  end
    
        it 'returns true when passed ?w if the argument is readable by the effective uid' do
      Kernel.test(?w, @tmp_file).should be_true
    end
    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end
    
    (allow file-read-metadata)
(allow file-read*
  ; This is currenly only added because using `xcodebuild` to build a resource
  ; bundle target starts a FSEvents stream on `/`. No idea why that would be
  ; needed, but for now it doesn’t seem like a real problem.
  (literal '/')
  (regex
    ; TODO see if we can restrict this more, but it's going to be hard
    #'^/Users/[^.]+/*'
    ;#'^/Users/[^.]+/.netrc'
    ;#'^/Users/[^.]+/.gemrc'
    ;#'^/Users/[^.]+/.gem/*'
    ;#'^/Users/[^.]+/Library/.*'
    #'^/Library/*'
    #'^/System/Library/*'
    #'^/usr/lib/*'
    #'^/usr/share/*'
    #'^/private/*'
    #'^/dev/*'
    #'^<%= ruby_prefix %>'
    #'^<%= pod_prefix %>'
    #'^<%= xcode_app_path %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
<% prefixes.each do |prefix| %>
    #'^<%= prefix %>/*'
<% end %>
  )
)
    
                target 'Static' do
                use_frameworks!(false)
            end
            target 'Dynamic' do
                use_frameworks!(true)
            end
        end
    end
end
    
    desc 'Clean out caches: .pygments-cache, .gist-cache, .sass-cache'
task :clean do
  rm_rf [Dir.glob('.pygments-cache/**'), Dir.glob('.gist-cache/**'), Dir.glob('.sass-cache/**'), 'source/stylesheets/screen.css']
end
    
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
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
        def sizes
      attrs = 'width='#{@sizes[0]}'' if @sizes[0]
      attrs += ' height='#{@sizes[1]}'' if @sizes[1]
      attrs
    end
  end
end