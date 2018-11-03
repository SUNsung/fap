
        
              def version_slug
        return if version.blank?
        slug = version.downcase
        slug.gsub! '+', 'p'
        slug.gsub! '#', 's'
        slug.gsub! %r{[^a-z0-9\_\.]}, '_'
        slug
      end
    
        def subpath_to(url)
      base_url.subpath_to url, ignore_case: true
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
    
              node.before(%(<div class='pre-title'>#{node['title']}</div>)) if node['title']