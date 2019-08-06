
        
          def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
          it 'Does not render variant when no variants published' do
        html_variant = create(:html_variant, published: false, approved: true)
        get article.path + '?variant_version=1'
        expect(response.body).not_to include html_variant.html
      end
    
      it 'renders a podcast index if there is a podcast with the slug successfully' do
    expect(get: '/#{podcast.slug}').to route_to(
      controller: 'stories',
      action: 'index',
      username: podcast.slug,
    )
  end
    
      describe 'GET /:path/stats' do
    before { sign_in user }
    
    desc 'Update configurations to support publishing to root or sub directory'
task :set_root_dir, :dir do |t, args|
  puts '>>> !! Please provide a directory, eg. rake config_dir[publishing/subdirectory]' unless args.dir
  if args.dir
    if args.dir == '/'
      dir = ''
    else
      dir = '/' + args.dir.sub(/(\/*)(.+)/, '\\2').sub(/\/$/, '');
    end
    rakefile = IO.read(__FILE__)
    rakefile.sub!(/public_dir(\s*)=(\s*)([''])[\w\-\/]*['']/, 'public_dir\\1=\\2\\3public#{dir}\\3')
    File.open(__FILE__, 'w') do |f|
      f.write rakefile
    end
    compass_config = IO.read('config.rb')
    compass_config.sub!(/http_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_path\\1=\\2\\3#{dir}/\\3')
    compass_config.sub!(/http_images_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_images_path\\1=\\2\\3#{dir}/images\\3')
    compass_config.sub!(/http_fonts_path(\s*)=(\s*)([''])[\w\-\/]*['']/, 'http_fonts_path\\1=\\2\\3#{dir}/fonts\\3')
    compass_config.sub!(/css_dir(\s*)=(\s*)([''])[\w\-\/]*['']/, 'css_dir\\1=\\2\\3public#{dir}/stylesheets\\3')
    File.open('config.rb', 'w') do |f|
      f.write compass_config
    end
    jekyll_config = IO.read('_config.yml')
    jekyll_config.sub!(/^destination:.+$/, 'destination: public#{dir}')
    jekyll_config.sub!(/^subscribe_rss:\s*\/.+$/, 'subscribe_rss: #{dir}/atom.xml')
    jekyll_config.sub!(/^root:.*$/, 'root: /#{dir.sub(/^\//, '')}')
    File.open('_config.yml', 'w') do |f|
      f.write jekyll_config
    end
    rm_rf public_dir
    mkdir_p '#{public_dir}#{dir}'
    puts '## Site's root directory is now '/#{dir.sub(/^\//, '')}' ##'
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
    
        # Outputs a single category as an <a> link.
    #
    #  +category+ is a category string to format as an <a> link
    #
    # Returns string
    #
    def category_link(category)
      dir = @context.registers[:site].config['category_dir']
      '<a class='category' href='/#{dir}/#{category.to_url}/'>#{category}</a>'
    end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end