
        
              def test_invert_create_table
        @recorder.revert do
          @recorder.record :create_table, [:system_settings]
        end
        drop_table = @recorder.commands.first
        assert_equal [:drop_table, [:system_settings], nil], drop_table
      end
    
          test '`rake routes` outputs routes' do
        app_file 'config/routes.rb', <<-RUBY
          Rails.application.routes.draw do
            get '/cart', to: 'cart#show'
          end
        RUBY
    
            def to_s
          @symbol.to_s
        end
        alias to_str to_s
    
      # if rss_url already in existing opml file, use that; otherwise, do a lookup
  rss_url = nil
  if File.exist?(OUTPUT_FILENAME)
    xml = Nokogiri::XML(File.open(OUTPUT_FILENAME))
    existing_blog = xml.xpath('//outline[@htmlUrl='#{web_url}']').first
    if existing_blog
      rss_url = existing_blog.attr('xmlUrl')
      puts '#{name}: ALREADY HAVE'
    end
  end
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
      context 'escaping' do
    it 'escapes html entities' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => '<bar>'
      expect(body).to eq('&lt;bar&gt;')
    end
    
      it 'denies post requests with wrong X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => bad_token)
    expect(last_response).not_to be_ok
  end
    
        it 'returns a hash with the flare tag's name' do
      expect(described_class.new(valid_article).tag_hash.value?('ama')).to be true
    end
    
          cl_image_path(src,
                    type: 'fetch',
                    width: '1000',
                    height: '500',
                    crop: 'imagga_scale',
                    quality: 'auto',
                    flags: 'progressive',
                    fetch_format: 'auto',
                    sign_url: true)
    end
  end
    
      def create
    @page = Page.new(page_params)
    @page.save!
    redirect_to '/internal/pages'
  end
    
    desc 'Move source to source.old, install source theme updates, replace source/_includes/navigation.html with source.old's navigation'
task :update_source, :theme do |t, args|
  theme = args.theme || 'classic'
  if File.directory?('#{source_dir}.old')
    puts '## Removed existing #{source_dir}.old directory'
    rm_r '#{source_dir}.old', :secure=>true
  end
  mkdir '#{source_dir}.old'
  cp_r '#{source_dir}/.', '#{source_dir}.old'
  puts '## Copied #{source_dir} into #{source_dir}.old/'
  cp_r '#{themes_dir}/'+theme+'/source/.', source_dir, :remove_destination=>true
  cp_r '#{source_dir}.old/_includes/custom/.', '#{source_dir}/_includes/custom/', :remove_destination=>true
  cp '#{source_dir}.old/favicon.png', source_dir
  mv '#{source_dir}/index.html', '#{blog_index_dir}', :force=>true if blog_index_dir != source_dir
  cp '#{source_dir}.old/index.html', source_dir if blog_index_dir != source_dir && File.exists?('#{source_dir}.old/index.html')
  puts '## Updated #{source_dir} ##'
end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
          if File.symlink?(code_path)
        return 'Code directory '#{code_path}' cannot be a symlink'
      end
    
    
module OctopressLiquidFilters