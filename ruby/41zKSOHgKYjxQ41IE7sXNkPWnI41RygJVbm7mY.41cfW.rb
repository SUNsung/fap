
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
                  'coderay'
            else
              @main_fallback_highlighter
            end
          end
        end
    
        it 'allows to delete a user' do
      visit admin_users_path
      find(:css, 'a[href='/admin/users/#{users(:bob).id}']').click
      expect(page).to have_text('User 'bob' was deleted.')
      expect(page).to have_no_text('bob@example.com')
    end
    
      describe '#yes_no' do
    it 'returns a label 'Yes' if any truthy value is given' do
      [true, Object.new].each { |value|
        label = yes_no(value)
        expect(label).to be_html_safe
        expect(Nokogiri(label).text).to eq 'Yes'
      }
    end
    
          it 'generates a richer DOT script' do
        expect(agents_dot(@agents, rich: true)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            (graph \[ [^\]]+ \];)?
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo,tooltip='Dot \x20 Foo',URL='#{Regexp.quote(agent_path(@foo))}'\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar1))}'\];
            \k<bar2> \[label=bar2,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar2))}',style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar3))}'\];
          \}
          \z
        }x)
      end
    end
  end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
        it 'for 12h' do
      expect(@scheduler.send(:hour_to_schedule_name, 12)).to eq('noon')
    end
    
        def get_cached_gist(gist, file)
      return nil if @cache_disabled
      cache_file = get_cache_file_for gist, file
      File.read cache_file if File.exist? cache_file
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
        def post_render(page)
      OctopressFilters::post_filter(page)
    end
  end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end