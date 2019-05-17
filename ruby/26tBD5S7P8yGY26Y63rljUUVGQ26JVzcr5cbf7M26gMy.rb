
        
              it 'creates a new user' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: '12345678'
        click_on 'Create User'
        expect(page).to have_text('User 'usertest' was successfully created.')
        expect(page).to have_text('test@test.com')
      end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
          @log.level = -1
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
            directives.compact.sort.join('; ')
      end
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
    # This stuff needs to be run after Paperclip is defined.
require 'paperclip/io_adapters/registry'
require 'paperclip/io_adapters/abstract_adapter'
require 'paperclip/io_adapters/empty_string_adapter'
require 'paperclip/io_adapters/identity_adapter'
require 'paperclip/io_adapters/file_adapter'
require 'paperclip/io_adapters/stringio_adapter'
require 'paperclip/io_adapters/data_uri_adapter'
require 'paperclip/io_adapters/nil_adapter'
require 'paperclip/io_adapters/attachment_adapter'
require 'paperclip/io_adapters/uploaded_file_adapter'
require 'paperclip/io_adapters/uri_adapter'
require 'paperclip/io_adapters/http_url_proxy_adapter'

    
        def clear
      @attachments = Hash.new { |h,k| h[k] = {} }
    end