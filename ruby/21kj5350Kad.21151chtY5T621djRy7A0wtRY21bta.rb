
        
            keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      # True if a {Formula} is being built with a specific option.
  # <pre>args << '--i-want-spam' if build.with? 'spam'
  #
  # args << '--qt-gui' if build.with? 'qt' # '--with-qt' ==> build.with? 'qt'
  #
  # # If a formula presents a user with a choice, but the choice must be fulfilled:
  # if build.with? 'example2'
  #   args << '--with-example2'
  # else
  #   args << '--with-example1'
  # end</pre>
  def with?(val)
    option_names = val.respond_to?(:option_names) ? val.option_names : [val]
    
    module Homebrew
  def list
    # Use of exec means we don't explicitly exit
    list_unbrewed if ARGV.flag? '--unbrewed'
    
      def self.canonical_name(name)
    Formulary.canonical_name(name)
  end
    
      before_action :set_account
  before_action :set_size
  before_action :set_statuses
    
            @user.send_confirmation_instructions
      end
    
        def filter_params
      params.permit(
        :local,
        :remote,
        :by_domain,
        :shortcode
      )
    end
  end
end

    
          if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
        private
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
      it 'raises a TypeError when passed a String' do
    lambda { srand('7') }.should raise_error(TypeError)
  end
end
    
        after :each do
      @tmp_file.close
      rm_r @tmp_file
    end
    
        @save_to.each { |_, v| FileUtils.mkdir_p(v) }
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
        get page
    # good html:
    # <pre><code>one\ntwo\nthree\nfour\n</code></pre>\n
    # broken html:
    # <pre>\n  <code>one\ntwo\nthree\nfour\n</code>\n</pre>
    assert_match /<pre><code>one\ntwo\nthree\nfour\n<\/code><\/pre>\n/m, last_response.body
  end
    
        @wiki = Gollum::Wiki.new(@path)
    page  = @wiki.page('PG')
    assert_equal '바뀐 text', utf8(page.raw_data)
    assert_equal 'ghi', page.version.message
  end
    
      begin
    require 'gollum-lib'
    wiki = Gollum::Wiki.new(gollum_path, wiki_options)
    if !wiki.exist? then
      raise Gollum::InvalidGitRepositoryError
    end
    if wiki_options[:plantuml_url]
      Gollum::Filter::PlantUML.configure do |config|
        puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
        config.url = wiki_options[:plantuml_url]
      end
    end
    puts
    puts 'Loaded Gollum wiki at:'
    puts '#{File.expand_path(gollum_path).inspect}'
    puts
    puts 'Example API calls:'
    puts %(    page = wiki.page('page-name'))
    puts %(    # => <Gollum::Page>)
    puts
    puts %(    page.raw_data)
    puts %(    # => '# My wiki page')
    puts
    puts %(    page.formatted_data)
    puts %(    # => '<h1>My wiki page</h1>')
    puts
    puts 'Full API documentation at:'
    puts 'https://github.com/gollum/gollum-lib'
    puts
    IRB.start_session(binding)
  rescue Gollum::InvalidGitRepositoryError, Gollum::NoSuchPathError
    puts 'Invalid Gollum wiki at #{File.expand_path(gollum_path).inspect}'
    exit 0
  end
else
  require 'gollum/app'
  Precious::App.set(:gollum_path, gollum_path)
  Precious::App.set(:wiki_options, wiki_options)
  Precious::App.settings.mustache[:templates] = wiki_options[:template_dir] if wiki_options[:template_dir]