
        
        module ActionView
  # = Action View Form Tag Helpers
  module Helpers #:nodoc:
    # Provides a number of methods for creating form tags that don't rely on an Active Record object assigned to the template like
    # FormHelper does. Instead, you provide the names and values manually.
    #
    # NOTE: The HTML options <tt>disabled</tt>, <tt>readonly</tt>, and <tt>multiple</tt> can all be treated as booleans. So specifying
    # <tt>disabled: true</tt> will give <tt>disabled='disabled'</tt>.
    module FormTagHelper
      extend ActiveSupport::Concern
    
    module ActionView #:nodoc:
  # = Action View Raw Output Helper
  module Helpers #:nodoc:
    module OutputSafetyHelper
      # This method outputs without escaping a string. Since escaping tags is
      # now default, this can be used when you don't want Rails to automatically
      # escape tags. This is not recommended if the data is coming from the user's
      # input.
      #
      # For example:
      #
      #  raw @user.name
      #  # => 'Jimmy <alert>Tables</alert>'
      def raw(stringish)
        stringish.to_s.html_safe
      end
    
              def render_collection_for(builder_class, &block)
            options = @options.stringify_keys
            rendered_collection = render_collection do |item, value, text, default_html_options|
              builder = instantiate_builder(builder_class, item, value, text, default_html_options)
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
    module ActionView
  # Layouts reverse the common pattern of including shared headers and footers in many templates to isolate changes in
  # repeated setups. The inclusion pattern has pages that look like this:
  #
  #   <%= render 'shared/header' %>
  #   Hello World
  #   <%= render 'shared/footer' %>
  #
  # This approach is a decent way of keeping common structures isolated from the changing content, but it's verbose
  # and if you ever want to change the structure of these two includes, you'll have to change all the templates.
  #
  # With layouts, you can flip it around and have the common structure know where to insert changing content. This means
  # that the header and footer are only mentioned in one place, like this:
  #
  #   // The header part of this layout
  #   <%= yield %>
  #   // The footer part of this layout
  #
  # And then you have content pages that look like this:
  #
  #    hello world
  #
  # At rendering time, the content page is computed and then inserted in the layout, like this:
  #
  #   // The header part of this layout
  #   hello world
  #   // The footer part of this layout
  #
  # == Accessing shared variables
  #
  # Layouts have access to variables specified in the content pages and vice versa. This allows you to have layouts with
  # references that won't materialize before rendering time:
  #
  #   <h1><%= @page_title %></h1>
  #   <%= yield %>
  #
  # ...and content pages that fulfill these references _at_ rendering time:
  #
  #    <% @page_title = 'Welcome' %>
  #    Off-world colonies offers you a chance to start a new life
  #
  # The result after rendering is:
  #
  #   <h1>Welcome</h1>
  #   Off-world colonies offers you a chance to start a new life
  #
  # == Layout assignment
  #
  # You can either specify a layout declaratively (using the #layout class method) or give
  # it the same name as your controller, and place it in <tt>app/views/layouts</tt>.
  # If a subclass does not have a layout specified, it inherits its layout using normal Ruby inheritance.
  #
  # For instance, if you have PostsController and a template named <tt>app/views/layouts/posts.html.erb</tt>,
  # that template will be used for all actions in PostsController and controllers inheriting
  # from PostsController.
  #
  # If you use a module, for instance Weblog::PostsController, you will need a template named
  # <tt>app/views/layouts/weblog/posts.html.erb</tt>.
  #
  # Since all your controllers inherit from ApplicationController, they will use
  # <tt>app/views/layouts/application.html.erb</tt> if no other layout is specified
  # or provided.
  #
  # == Inheritance Examples
  #
  #   class BankController < ActionController::Base
  #     # bank.html.erb exists
  #
  #   class ExchangeController < BankController
  #     # exchange.html.erb exists
  #
  #   class CurrencyController < BankController
  #
  #   class InformationController < BankController
  #     layout 'information'
  #
  #   class TellerController < InformationController
  #     # teller.html.erb exists
  #
  #   class EmployeeController < InformationController
  #     # employee.html.erb exists
  #     layout nil
  #
  #   class VaultController < BankController
  #     layout :access_level_layout
  #
  #   class TillController < BankController
  #     layout false
  #
  # In these examples, we have three implicit lookup scenarios:
  # * The +BankController+ uses the 'bank' layout.
  # * The +ExchangeController+ uses the 'exchange' layout.
  # * The +CurrencyController+ inherits the layout from BankController.
  #
  # However, when a layout is explicitly set, the explicitly set layout wins:
  # * The +InformationController+ uses the 'information' layout, explicitly set.
  # * The +TellerController+ also uses the 'information' layout, because the parent explicitly set it.
  # * The +EmployeeController+ uses the 'employee' layout, because it set the layout to +nil+, resetting the parent configuration.
  # * The +VaultController+ chooses a layout dynamically by calling the <tt>access_level_layout</tt> method.
  # * The +TillController+ does not use a layout at all.
  #
  # == Types of layouts
  #
  # Layouts are basically just regular templates, but the name of this template needs not be specified statically. Sometimes
  # you want to alternate layouts depending on runtime information, such as whether someone is logged in or not. This can
  # be done either by specifying a method reference as a symbol or using an inline method (as a proc).
  #
  # The method reference is the preferred approach to variable layouts and is used like this:
  #
  #   class WeblogController < ActionController::Base
  #     layout :writers_and_readers
  #
  #     def index
  #       # fetching posts
  #     end
  #
  #     private
  #       def writers_and_readers
  #         logged_in? ? 'writer_layout' : 'reader_layout'
  #       end
  #   end
  #
  # Now when a new request for the index action is processed, the layout will vary depending on whether the person accessing
  # is logged in or not.
  #
  # If you want to use an inline method, such as a proc, do something like this:
  #
  #   class WeblogController < ActionController::Base
  #     layout proc { |controller| controller.logged_in? ? 'writer_layout' : 'reader_layout' }
  #   end
  #
  # If an argument isn't given to the proc, it's evaluated in the context of
  # the current controller anyway.
  #
  #   class WeblogController < ActionController::Base
  #     layout proc { logged_in? ? 'writer_layout' : 'reader_layout' }
  #   end
  #
  # Of course, the most common way of specifying a layout is still just as a plain template name:
  #
  #   class WeblogController < ActionController::Base
  #     layout 'weblog_standard'
  #   end
  #
  # The template will be looked always in <tt>app/views/layouts/</tt> folder. But you can point
  # <tt>layouts</tt> folder direct also. <tt>layout 'layouts/demo'</tt> is the same as <tt>layout 'demo'</tt>.
  #
  # Setting the layout to +nil+ forces it to be looked up in the filesystem and fallbacks to the parent behavior if none exists.
  # Setting it to +nil+ is useful to re-enable template lookup overriding a previous configuration set in the parent:
  #
  #     class ApplicationController < ActionController::Base
  #       layout 'application'
  #     end
  #
  #     class PostsController < ApplicationController
  #       # Will use 'application' layout
  #     end
  #
  #     class CommentsController < ApplicationController
  #       # Will search for 'comments' layout and fallback 'application' layout
  #       layout nil
  #     end
  #
  # == Conditional layouts
  #
  # If you have a layout that by default is applied to all the actions of a controller, you still have the option of rendering
  # a given action or set of actions without a layout, or restricting a layout to only a single action or a set of actions. The
  # <tt>:only</tt> and <tt>:except</tt> options can be passed to the layout call. For example:
  #
  #   class WeblogController < ActionController::Base
  #     layout 'weblog_standard', except: :rss
  #
  #     # ...
  #
  #   end
  #
  # This will assign 'weblog_standard' as the WeblogController's layout for all actions except for the +rss+ action, which will
  # be rendered directly, without wrapping a layout around the rendered view.
  #
  # Both the <tt>:only</tt> and <tt>:except</tt> condition can accept an arbitrary number of method references, so
  # #<tt>except: [ :rss, :text_only ]</tt> is valid, as is <tt>except: :rss</tt>.
  #
  # == Using a different layout in the action render call
  #
  # If most of your actions use the same layout, it makes perfect sense to define a controller-wide layout as described above.
  # Sometimes you'll have exceptions where one action wants to use a different layout than the rest of the controller.
  # You can do this by passing a <tt>:layout</tt> option to the <tt>render</tt> call. For example:
  #
  #   class WeblogController < ActionController::Base
  #     layout 'weblog_standard'
  #
  #     def help
  #       render action: 'help', layout: 'help'
  #     end
  #   end
  #
  # This will override the controller-wide 'weblog_standard' layout, and will render the help action with the 'help' layout instead.
  module Layouts
    extend ActiveSupport::Concern
    
          def exists?(name, prefixes = [], partial = false, keys = [], **options)
        @view_paths.exists?(*args_for_lookup(name, prefixes, partial, keys, options))
      end
      alias :template_exists? :exists?
    
    def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
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
    
              if options.fetch('detach', false)
            Jekyll.logger.info 'Auto-regeneration:',
                               'disabled when running server detached.'
          elsif options.fetch('watch', false)
            watch(site, options)
          else
            Jekyll.logger.info 'Auto-regeneration:', 'disabled. Use --watch to enable.'
          end
        end
    
            def case_insensitive_urls(things, destination)
          things.each_with_object({}) do |thing, memo|
            dest = thing.destination(destination)
            (memo[dest.downcase] ||= []) << dest
          end
        end
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        it 'for the forenoon' do
      expect(@scheduler.send(:hour_to_schedule_name, 6)).to eq('6am')
    end
    
      it 'ignores invalid values' do
    location2 = Location.new(
      lat: 2,
      lng: 3,
      radius: -1,
      speed: -1,
      course: -1)
    expect(location2.radius).to be_nil
    expect(location2.speed).to be_nil
    expect(location2.course).to be_nil
  end
    
      describe '#values_at' do
    it 'returns arrays of matching values' do
      expect(Utils.values_at({ :foo => { :bar => :baz }}, 'foo.bar')).to eq(%w[baz])
      expect(Utils.values_at({ :foo => [ { :bar => :baz }, { :bar => :bing } ]}, 'foo[*].bar')).to eq(%w[baz bing])
      expect(Utils.values_at({ :foo => [ { :bar => :baz }, { :bar => :bing } ]}, 'foo[*].bar')).to eq(%w[baz bing])
    end
    
    
  # Returns a collection of found hidden inputs
  #
  # @return [Array<Hash>] An array, each element represents a form that contains a hash of found hidden inputs
  #  * 'name' [String] The hidden input's original name. The value is the hidden input's original value.
  # @example
  #  res = send_request_cgi('uri'=>'/')
  #  inputs = res.get_hidden_inputs
  #  session_id = inputs[0]['sessionid'] # The first form's 'sessionid' hidden input
  def get_hidden_inputs
    forms = []
    noko = get_html_document
    noko.search('form').each_entry do |form|
      found_inputs = {}
      form.search('input').each_entry do |input|
        input_type = input.attributes['type'] ? input.attributes['type'].value : ''
        next if input_type !~ /hidden/i
    
        # Register callbacks
    self.listener.on_client_connect_proc = Proc.new { |cli|
      on_client_connect(cli)
    }
    self.listener.on_client_data_proc = Proc.new { |cli|
      on_client_data(cli)
    }
    
      def dial(number)
    self.client.send_new(self, number)
    res = wait_for(IAX_SUBTYPE_AUTHREQ, IAX_SUBTYPE_ACCEPT)
    return if not res
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Encodes the pa_data field
          #
          # @return [String]
          def encode_pa_data
            elems = []
            pa_data.each do |data|
              elems << data.encode
            end
    
    When /^I (?:sign|log) in with password '([^']*)'( on the mobile website)?$/ do |password, mobile|
  @me.password = password
  automatic_login
  confirm_login mobile
end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
          get :index, params: {conversation_id: @conv1.id}
      save_fixture(html_for('body'), 'conversations_read')
    end
  end
    
    STDOUT.sync = true if ENV['CP_STDOUT_SYNC'] == 'TRUE'
    
    ENV['COCOAPODS_DISABLE_STATS'] = 'true'

    
        # Returns a new {Installer} parametrized from the {Config}.
    #
    # @return [Installer]
    #
    def installer_for_config
      Installer.new(config.sandbox, config.podfile, config.lockfile)
    end
    
            private
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            private
    
        def path
      @file.respond_to?(:path) ? @file.path : @file
    end
    
        def define_flush_errors
      @klass.send(:validates_each, @name) do |record, attr, value|
        attachment = record.send(@name)
        attachment.send(:flush_errors)
      end
    end