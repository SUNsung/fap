
        
                  def initialize(template_object, object_name, method_name, object, tag_value)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @tag_value = tag_value
          end
    
        def at_css(*args)
      doc.at_css(*args)
    end
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
        def load_capybara_selenium
      require 'capybara/dsl'
      require 'selenium/webdriver'
      Capybara.register_driver :chrome do |app|
        options = Selenium::WebDriver::Chrome::Options.new(args: %w[headless disable-gpu])
        Capybara::Selenium::Driver.new(app, browser: :chrome, options: options)
      end
      Capybara.javascript_driver = :chrome
      Capybara.current_driver = :chrome
      Capybara.run_server = false
      Capybara
    end
    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
    Then(/^the tasks folder is created$/) do
  path = TestApp.test_app_path.join('lib/capistrano/tasks')
  expect(Dir.exist?(path)).to be true
end
    
    World(VagrantHelpers)

    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
          def roles_for(names)
        options = extract_options(names)
        s = Filter.new(:role, names).filter(servers_by_key.values)
        s.select { |server| server.select?(options) }
      end
    
          class ValidatedQuestion < Question
        def initialize(validator)
          @validator = validator
        end
    
    set_if_empty :default_env, {}
set_if_empty :keep_releases, 5
    
          def title
        'Create a new page'
      end
    
          def remove_page_extentions(page_path)
        Gollum::Markup.formats.values.each do |format|
          page_path = page_path.gsub(/\.#{format[:regexp]}$/, '')
        end
        return page_path
      end
    
          attr_reader :name, :path
    
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

    
    #############################################################################
#
# Custom tasks (add your own tasks here)
#
#############################################################################