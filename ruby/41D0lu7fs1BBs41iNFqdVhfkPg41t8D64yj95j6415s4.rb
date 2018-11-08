
        
        def converted_history(markdown)
  remove_head_from_history(
    custom_release_header_anchors(
      liquid_escape(
        linkify(
          normalize_bullets(markdown)
        )
      )
    )
  )
end
    
    DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    #
    
          def print_summary(features)
        @io.puts
        print_stats(features, @options)
        print_snippets(@options)
        print_passing_wip(@options)
      end
    end
  end
end
    
    def slug(title = nil)
  if !title
    then Time.now.strftime('%s%9N') # nanoseconds since the Epoch
  else title.downcase.gsub(%r![^\w]!, ' ').strip.gsub(%r!\s+!, '-')
  end
end
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
    module Jekyll
  module Commands
    class Serve
      # The LiveReload protocol requires the server to serve livereload.js over HTTP
      # despite the fact that the protocol itself uses WebSockets.  This custom connection
      # class addresses the dual protocols that the server needs to understand.
      class HttpAwareConnection < EventMachine::WebSocket::Connection
        attr_reader :reload_body, :reload_size
    
            # config[kramdown][syntax_higlighter] >
        #   config[kramdown][enable_coderay] >
        #   config[highlighter]
        # Where `enable_coderay` is now deprecated because Kramdown
        # supports Rouge now too.
        def highlighter
          return @highlighter if @highlighter
    
        def xpath(*args)
      doc.xpath(*args)
    end
    
        alias_method :insert_before, :insert
    
        private
    
              node.before(%(<div class='pre-title'>#{node['title']}</div>)) if node['title']
    
            css('*[layout]').remove_attr('layout')
        css('*[layout-xs]').remove_attr('layout-xs')
        css('*[flex]').remove_attr('flex')
        css('*[flex-xs]').remove_attr('flex-xs')
        css('*[ng-class]').remove_attr('ng-class')
        css('*[align]').remove_attr('align')
        css('h1, h2, h3').remove_attr('class')
    
      it 'sets the return value of the catch block to a value specified as second parameter' do
    res = catch :blah do
      throw :blah, :return_value
    end
    res.should == :return_value
  end
    
      it 'writes each argument on a line when passed multiple arguments' do
    lambda {
      $VERBOSE = true
      warn('line 1', 'line 2')
    }.should output(nil, 'line 1\nline 2\n')
  end
    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end
    
          def initialize(*)
        super
        return if args.empty?
    
          def initialize(*args, cache_location: Cache.path)
        super(*args)
        @cache_location = Pathname.new(cache_location)
      end
    
        odie 'Unknown command: #{cmd}' unless path
    puts path
  end
end

    
    desc 'Set up _deploy folder and deploy branch for Github Pages deployment'
task :setup_github_pages, :repo do |t, args|
  if args.repo
    repo_url = args.repo
  else
    puts 'Enter the read/write url for your repository'
    puts '(For example, 'git@github.com:your_username/your_username.github.io.git)'
    puts '           or 'https://github.com/your_username/your_username.github.io')'
    repo_url = get_stdin('Repository url: ')
  end
  protocol = (repo_url.match(/(^git)@/).nil?) ? 'https' : 'git'
  if protocol == 'git'
    user = repo_url.match(/:([^\/]+)/)[1]
  else
    user = repo_url.match(/github\.com\/([^\/]+)/)[1]
  end
  branch = (repo_url.match(/\/[\w-]+\.github\.(?:io|com)/).nil?) ? 'gh-pages' : 'master'
  project = (branch == 'gh-pages') ? repo_url.match(/([^\/]+?)(\.git|$)/i)[1] : ''
  unless (`git remote -v` =~ /origin.+?octopress(?:\.git)?/).nil?
    # If octopress is still the origin remote (from cloning) rename it to octopress
    system 'git remote rename origin octopress'
    if branch == 'master'
      # If this is a user/organization pages repository, add the correct origin remote
      # and checkout the source branch for committing changes to the blog source.
      system 'git remote add origin #{repo_url}'
      puts 'Added remote #{repo_url} as origin'
      system 'git config branch.master.remote origin'
      puts 'Set origin as default remote'
      system 'git branch -m master source'
      puts 'Master branch renamed to 'source' for committing your blog source files'
    else
      unless !public_dir.match('#{project}').nil?
        system 'rake set_root_dir[#{project}]'
      end
    end
  end
  url = blog_url(user, project, source_dir)
  jekyll_config = IO.read('_config.yml')
  jekyll_config.sub!(/^url:.*$/, 'url: #{url}')
  File.open('_config.yml', 'w') do |f|
    f.write jekyll_config
  end
  rm_rf deploy_dir
  mkdir deploy_dir
  cd '#{deploy_dir}' do
    system 'git init'
    system 'echo 'My Octopress Page is coming soon &hellip;' > index.html'
    system 'git add .'
    system 'git commit -m \'Octopress init\''
    system 'git branch -m gh-pages' unless branch == 'master'
    system 'git remote add origin #{repo_url}'
    rakefile = IO.read(__FILE__)
    rakefile.sub!(/deploy_branch(\s*)=(\s*)([''])[\w-]*['']/, 'deploy_branch\\1=\\2\\3#{branch}\\3')
    rakefile.sub!(/deploy_default(\s*)=(\s*)([''])[\w-]*['']/, 'deploy_default\\1=\\2\\3push\\3')
    File.open(__FILE__, 'w') do |f|
      f.write rakefile
    end
  end
  puts '\n---\n## Now you can deploy to #{repo_url} with `rake deploy` ##'
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
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
    end
Liquid::Template.register_filter OctopressLiquidFilters
    
      it 'ignores empty arrays' do
    expect_no_offenses('[]')
  end