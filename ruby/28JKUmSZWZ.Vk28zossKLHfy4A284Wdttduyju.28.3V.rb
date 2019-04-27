        if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        attr_reader :filters
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
            css('code code').each do |node|
          node.before(node.children).remove
        end
    
          private
    
            css('header').each do |node|
          node.before(node.children).remove
        end
    
            css('.toplang', '#quickview', '.top').remove
    
          def has_sidebar
        @sidebar = (@page.sidebar || false) if @sidebar.nil? && @page
        !!@sidebar
      end
    
          def page_name
        @name.gsub('-', ' ')
      end
    
          def string_to_code(string)
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
    # Commit file to wiki, overwriting previous versions of that file
def commit_test_file(wiki, dir, filename, ext, content)
  committer = Gollum::Committer.new(wiki, :message => 'Added testfile', :parent  => wiki.repo.head.commit)
  committer.add_to_index(dir, filename, ext, content, true)
    committer.after_commit do |committer, sha|
      wiki.clear_cache
      committer.update_working_dir(dir, filename, ext)
    end
  committer.commit
end

    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
        @wiki.update_page(@wiki.page('PG'), nil, nil, '다른 text', {})
    page = @wiki.page('PG')
    assert_equal '다른 text', utf8(page.raw_data)
    
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
    
        def sanitize_empty_params(param)
      [nil, ''].include?(param) ? nil : CGI.unescape(param)
    end