
        
                def initialize(object_name, method_name, template_object, options = {})
          @object_name, @method_name = object_name.to_s.dup, method_name.to_s.dup
          @template_object = template_object
    
              content = if block_given?
            @template_object.capture(builder, &block)
          elsif @content.present?
            @content.to_s
          else
            render_component(builder)
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
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
    #
    
      def self.jekyll_bin; source_dir.join('exe', 'jekyll'); end
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
            def stop
          # There is only one EventMachine instance per Ruby process so stopping
          # it here will stop the reactor thread we have running.
          EM.stop if EM.reactor_running?
          Jekyll.logger.debug 'LiveReload Server:', 'halted'
        end
    
              # This is too noisy even for --verbose, but uncomment if you need it for
          # a specific WebSockets issue.  Adding ?LR-verbose=true onto the URL will
          # enable logging on the client side.
          # em_opts[:debug] = true
    
              relation.update_all(update)
        end
      end
    end
  end
end

    
            def preload_commit_authors
          # This also preloads the author of every commit. We're using 'lazy_author'
          # here since 'author' immediately loads the data on the first call.
          @pipeline.commit.try(:lazy_author)
        end
    
          # Returns the details of a GitHub repository.
      #
      # name - The path (in the form `owner/repository`) of the repository.
      def repository(name)
        with_rate_limit { octokit.repo(name) }
      end
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
            def importer_class
          LfsObjectImporter
        end
    
            # Builds a new note using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
          hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
            if params[:create_and_unresolve]
          @report.unresolve!
          log_action :reopen, @report
        end
    
      def future_expires
    Time.now.utc + lease_seconds_or_default
  end
    
    class Api::V1::Instances::ActivityController < Api::BaseController
  before_action :require_enabled_api!
    
    module Homebrew
  module_function
    
      def insert(index, *paths)
    @paths = parse(*@paths.insert(index, *paths))
    self
  end
    
          opts.on('--precision NUMBER_OF_DIGITS', Integer,
              'How many digits of precision to use when outputting decimal numbers.',
              'Defaults to #{Sass::Script::Value::Number.precision}.') do |precision|
        Sass::Script::Value::Number.precision = precision
      end
    
          # Get the publicly-visible URL for an imported file. This URL is used by
      # source maps to link to the source stylesheet. This may return `nil` to
      # indicate that no public URL is available; however, this will cause
      # sourcemap generation to fail if any CSS is generated from files imported
      # from this importer.
      #
      # If an absolute 'file:' URI can be produced for an imported file, that
      # should be preferred to returning `nil`. However, a URL relative to
      # `sourcemap_directory` should be preferred over an absolute 'file:' URI.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param sourcemap_directory [String, NilClass] The absolute path to a
      #   directory on disk where the sourcemap will be saved. If uri refers to
      #   a file on disk that's accessible relative to sourcemap_directory, this
      #   may return a relative URL. This may be `nil` if the sourcemap's
      #   eventual location is unknown.
      # @return [String?] The publicly-visible URL for this file, or `nil`
      #   indicating that no publicly-visible URL exists. This should be
      #   appropriately URL-escaped.
      def public_url(uri, sourcemap_directory)
        return if @public_url_warning_issued
        @public_url_warning_issued = true
        Sass::Util.sass_warn <<WARNING
WARNING: #{self.class.name} should define the #public_url method.
WARNING
        nil
      end
    
      test 'creating page is blocked' do
    Precious::App.set(:wiki_options, { allow_editing: false})
    post '/create', :content => 'abc', :page => 'D',
         :format             => 'markdown', :message => 'def'
    assert !last_response.ok?
    
      test 'clean path with leading slash' do
    assert_equal '/Mordor', clean_path('/Mordor')
  end
    
    context 'Frontend Unicode support' do
  include Rack::Test::Methods
    
      # = MANIFEST =
  s.files = %w[
    CONTRIBUTING.md
    Gemfile
    HISTORY.md
    ISSUE_TEMPLATE.md
    LICENSE
    README.md
    Rakefile
    bin/gollum
    config.rb
    config.ru
    contrib/openrc/conf.d/gollum
    contrib/openrc/init.d/gollum
    contrib/systemd/gollum@.service
    contrib/sysv-debian/init.d/gollum
    gollum.gemspec
    lib/gollum.rb
    lib/gollum/app.rb
    lib/gollum/helpers.rb
    lib/gollum/public/gollum/css/_styles.css
    lib/gollum/public/gollum/css/dialog.css
    lib/gollum/public/gollum/css/editor.css
    lib/gollum/public/gollum/css/gollum.css
    lib/gollum/public/gollum/css/ie7.css
    lib/gollum/public/gollum/css/print.css
    lib/gollum/public/gollum/css/template.css
    lib/gollum/public/gollum/fonts/FontAwesome.otf
    lib/gollum/public/gollum/fonts/fontawesome-webfont.eot
    lib/gollum/public/gollum/fonts/fontawesome-webfont.svg
    lib/gollum/public/gollum/fonts/fontawesome-webfont.ttf
    lib/gollum/public/gollum/fonts/fontawesome-webfont.woff
    lib/gollum/public/gollum/images/dirty-shade.png
    lib/gollum/public/gollum/images/fileview/document.png
    lib/gollum/public/gollum/images/fileview/folder-horizontal.png
    lib/gollum/public/gollum/images/fileview/toggle-small-expand.png
    lib/gollum/public/gollum/images/fileview/toggle-small.png
    lib/gollum/public/gollum/images/fileview/trashcan.png
    lib/gollum/public/gollum/images/icon-sprite.png
    lib/gollum/public/gollum/images/man_24.png
    lib/gollum/public/gollum/images/para.png
    lib/gollum/public/gollum/images/pin-16.png
    lib/gollum/public/gollum/images/pin-20.png
    lib/gollum/public/gollum/images/pin-24.png
    lib/gollum/public/gollum/images/pin-32.png
    lib/gollum/public/gollum/javascript/editor/gollum.editor.js
    lib/gollum/public/gollum/javascript/editor/langs/asciidoc.js
    lib/gollum/public/gollum/javascript/editor/langs/creole.js
    lib/gollum/public/gollum/javascript/editor/langs/markdown.js
    lib/gollum/public/gollum/javascript/editor/langs/org.js
    lib/gollum/public/gollum/javascript/editor/langs/pod.js
    lib/gollum/public/gollum/javascript/editor/langs/rdoc.js
    lib/gollum/public/gollum/javascript/editor/langs/textile.js
    lib/gollum/public/gollum/javascript/gollum.dialog.js
    lib/gollum/public/gollum/javascript/gollum.js
    lib/gollum/public/gollum/javascript/gollum.placeholder.js
    lib/gollum/public/gollum/javascript/identicon_canvas.js
    lib/gollum/public/gollum/javascript/jquery-1.7.2.min.js
    lib/gollum/public/gollum/javascript/jquery.color.js
    lib/gollum/public/gollum/javascript/mousetrap.min.js
    lib/gollum/public/gollum/livepreview/css/custom.css
    lib/gollum/public/gollum/livepreview/images/cancel_24.png
    lib/gollum/public/gollum/livepreview/images/globe_24.png
    lib/gollum/public/gollum/livepreview/images/lr_24.png
    lib/gollum/public/gollum/livepreview/images/save_24.png
    lib/gollum/public/gollum/livepreview/images/savecomment_24.png
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ace.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/anchor.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/anchor_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/autocomplete.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/autocomplete/popup.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/autocomplete/text_completer.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/autocomplete/util.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/background_tokenizer.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/background_tokenizer_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/commands/command_manager.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/commands/command_manager_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/commands/default_commands.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/commands/incremental_search_commands.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/commands/multi_select_commands.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/commands/occur_commands.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/config.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/config_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/css/codefolding-fold-button-states.png
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/css/editor.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/css/expand-marker.png
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/document.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/document_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/edit_session.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/edit_session/bracket_match.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/edit_session/fold.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/edit_session/fold_line.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/edit_session/folding.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/edit_session_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/editor.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/editor_change_document_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/editor_highlight_selected_word_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/editor_navigation_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/editor_text_edit_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/beautify.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/beautify/php_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/chromevox.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/elastic_tabstops_lite.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/emmet.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/error_marker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/keybinding_menu.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/language_tools.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/linking.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/menu_tools/add_editor_menu_options.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/menu_tools/element_generator.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/menu_tools/generate_settings_menu.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/menu_tools/get_editor_keyboard_shortcuts.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/menu_tools/get_set_functions.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/menu_tools/overlay_page.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/menu_tools/settings_menu.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/modelist.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/old_ie.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/old_ie_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/searchbox.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/searchbox.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/settings_menu.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/spellcheck.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/split.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/static.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/static_highlight.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/static_highlight_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/statusbar.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/textarea.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/themelist.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/whitespace.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/ext/whitespace_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/incremental_search.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/incremental_search_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/keyboard/emacs.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/keyboard/emacs_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/keyboard/hash_handler.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/keyboard/keybinding.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/keyboard/keybinding_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/keyboard/state_handler.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/keyboard/textarea.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/keyboard/textinput.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/keyboard/vim.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/keyboard/vim_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/layer/cursor.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/layer/font_metrics.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/layer/gutter.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/layer/marker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/layer/text.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/layer/text_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/app_config.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/dom.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/es5-shim.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/event.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/event_emitter.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/event_emitter_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/fixoldbrowsers.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/keys.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/lang.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/net.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/oop.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/regexp.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/lib/useragent.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/line_widgets.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/Readme.md
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/highlight_rules_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/package.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_asciidoc.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_coffee.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_curly.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_html.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_javascript.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_livescript.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_lucene.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_markdown.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_php.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_ruby.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/text_xml.txt
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_abap.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_abc.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_actionscript.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_ada.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_asciidoc.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_assembly_x86.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_autohotkey.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_batchfile.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_c9search.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_c_cpp.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_cirru.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_clojure.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_cobol.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_coffee.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_coldfusion.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_csharp.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_css.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_curly.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_d.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_dart.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_diff.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_dot.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_eiffel.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_ejs.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_elixir.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_elm.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_erlang.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_forth.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_ftl.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_gcode.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_gherkin.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_gitignore.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_glsl.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_golang.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_groovy.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_haml.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_handlebars.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_haskell.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_haxe.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_html.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_html_ruby.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_ini.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_io.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_jack.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_jade.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_java.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_javascript.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_json.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_jsoniq.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_jsp.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_jsx.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_julia.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_latex.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_less.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_liquid.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_lisp.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_livescript.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_logiql.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_lsl.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_lua.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_luapage.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_lucene.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_markdown.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_mask.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_matlab.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_mel.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_mushcode.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_mysql.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_nix.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_objectivec.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_ocaml.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_pascal.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_perl.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_pgsql.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_php.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_powershell.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_prolog.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_properties.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_protobuf.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_python.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_r.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_rdoc.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_rhtml.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_ruby.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_rust.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_sass.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_scad.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_scala.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_scheme.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_scss.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_sh.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_sjs.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_smarty.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_snippets.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_soy_template.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_space.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_sql.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_stylus.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_svg.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_tcl.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_tex.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_text.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_textile.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_toml.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_twig.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_typescript.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_vala.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_vbscript.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_velocity.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_verilog.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_vhdl.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_xml.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_xquery.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/_test/tokens_yaml.json
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/abap.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/abap_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/abc.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/abc_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/actionscript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/actionscript_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ada.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ada_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/apache_conf.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/apache_conf_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/applescript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/applescript_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/asciidoc.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/asciidoc_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/assembly_x86.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/assembly_x86_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/autohotkey.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/autohotkey_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/batchfile.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/batchfile_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/behaviour.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/behaviour/behaviour_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/behaviour/css.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/behaviour/cstyle.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/behaviour/html.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/behaviour/xml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/behaviour/xquery.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/c9search.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/c9search_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/c_cpp.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/c_cpp_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/cirru.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/cirru_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/clojure.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/clojure_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/cobol.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/cobol_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee/coffee-script.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee/helpers.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee/lexer.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee/nodes.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee/parser.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee/parser_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee/rewriter.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee/scope.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coffee_worker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coldfusion.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coldfusion_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/coldfusion_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/csharp.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/csharp_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/css.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/css/csslint.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/css_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/css_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/css_worker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/css_worker_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/curly.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/curly_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/d.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/d_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/dart.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/dart_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/diff.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/diff_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/django.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/doc_comment_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/dockerfile.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/dockerfile_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/dot.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/dot_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/eiffel.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/eiffel_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ejs.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/elixir.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/elixir_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/elm.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/elm_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/erlang.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/erlang_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/asciidoc.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/c9search.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/coffee.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/coffee_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/csharp.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/cstyle.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/cstyle_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/diff.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/fold_mode.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/html.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/html_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/ini.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/latex.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/lua.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/markdown.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/mixed.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/pythonic.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/pythonic_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/velocity.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/xml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/folding/xml_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/forth.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/forth_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ftl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ftl_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/gcode.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/gcode_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/gherkin.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/gherkin_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/gitignore.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/gitignore_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/glsl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/glsl_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/golang.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/golang_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/groovy.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/groovy_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/haml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/haml_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/handlebars.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/handlebars_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/haskell.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/haskell_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/haxe.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/haxe_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/html.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/html/saxparser.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/html_completions.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/html_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/html_ruby.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/html_ruby_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/html_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/html_worker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ini.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ini_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/io.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/io_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/jack.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/jack_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/jade.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/jade_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/java.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/java_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/javascript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/javascript/jshint.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/javascript_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/javascript_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/javascript_worker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/javascript_worker_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/js_regex_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/json.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/json/json_parse.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/json_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/json_worker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/json_worker_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/jsoniq.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/jsp.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/jsp_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/jsx.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/jsx_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/julia.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/julia_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/latex.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/latex_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/less.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/less_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/liquid.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/liquid_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/lisp.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/lisp_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/livescript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/logiql.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/logiql_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/logiql_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/lsl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/lsl_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/lua.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/lua/luaparse.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/lua_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/lua_worker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/luapage.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/luapage_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/lucene.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/lucene_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/makefile.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/makefile_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/markdown.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/markdown_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/mask.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/mask_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/matching_brace_outdent.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/matching_parens_outdent.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/matlab.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/matlab_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/mel.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/mel_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/mushcode.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/mushcode_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/mysql.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/mysql_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/nix.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/nix_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/objectivec.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/objectivec_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ocaml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ocaml_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/pascal.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/pascal_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/perl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/perl_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/pgsql.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/pgsql_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/php.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/php/php.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/php_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/php_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/php_worker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/plain_text.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/plain_text_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/powershell.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/powershell_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/praat.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/praat_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/prolog.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/prolog_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/properties.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/properties_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/protobuf.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/protobuf_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/python.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/python_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/python_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/r.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/r_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/rdoc.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/rdoc_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/rhtml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/rhtml_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ruby.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ruby_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/ruby_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/rust.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/rust_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/sass.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/sass_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/scad.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/scad_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/scala.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/scala_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/scheme.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/scheme_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/scss.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/scss_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/sh.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/sh_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/sjs.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/sjs_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/smarty.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/smarty_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/snippets.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/soy_template.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/soy_template_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/space.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/space_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/sql.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/sql_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/stylus.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/stylus_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/svg.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/svg_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/tcl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/tcl_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/tex.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/tex_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/text.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/text_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/text_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/textile.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/textile_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/toml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/toml_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/twig.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/twig_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/typescript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/typescript_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/vala.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/vala_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/vbscript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/vbscript_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/velocity.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/velocity_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/verilog.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/verilog_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/vhdl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/vhdl_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xml/dom-parser.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xml/dom.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xml/sax.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xml_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xml_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xml_worker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xquery.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xquery/Readme.md
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xquery/jsoniq_lexer.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xquery/xqlint.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xquery/xquery_lexer.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/xquery_worker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/yaml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mode/yaml_highlight_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/model/editor.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mouse/default_gutter_handler.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mouse/default_handlers.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mouse/dragdrop_handler.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mouse/fold_handler.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mouse/mouse_event.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mouse/mouse_handler.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mouse/mouse_handler_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/mouse/multi_select_handler.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/multi_select.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/multi_select_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/occur.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/occur_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/placeholder.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/placeholder_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/range.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/range_list.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/range_list_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/range_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/renderloop.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/requirejs/text.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/requirejs/text_build.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/scrollbar.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/search.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/search_highlight.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/search_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/selection.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/selection_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/_.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/_all_modes.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/_all_modes.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/abap.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/abap.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/abc.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/abc.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/actionscript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/actionscript.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ada.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ada.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/all_modes.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/all_modes.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/apache.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/apache_conf.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/apache_conf.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/applescript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/applescript.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/asciidoc.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/asciidoc.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/assembly_x86.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/assembly_x86.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/autohotkey.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/autohotkey.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/autoit.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/batchfile.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/batchfile.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/c.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/c9search.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/c9search.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/c_cpp.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/c_cpp.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/chef.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/cirru.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/cirru.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/clojure.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/clojure.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/cmake.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/cobol.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/cobol.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/coffee.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/coffee.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/coldfusion.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/coldfusion.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/cs.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/csharp.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/csharp.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/css.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/css.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/curly.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/curly.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/d.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/d.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/dart.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/dart.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/diff.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/diff.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/django.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/django.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/dockerfile.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/dockerfile.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/dot.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/dot.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/dummy.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/dummy_syntax.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/eiffel.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/eiffel.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ejs.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ejs.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/elixir.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/elixir.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/elm.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/elm.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/erlang.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/erlang.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/eruby.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/falcon.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/forth.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/forth.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ftl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ftl.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/gcode.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/gcode.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/gherkin.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/gherkin.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/gitignore.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/gitignore.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/glsl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/glsl.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/go.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/golang.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/golang.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/groovy.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/groovy.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/haml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/haml.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/handlebars.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/handlebars.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/haskell.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/haskell.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/haxe.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/haxe.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/html.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/html.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/html_ruby.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/html_ruby.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/htmldjango.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/htmltornado.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ini.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ini.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/io.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/io.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/jack.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/jack.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/jade.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/jade.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/java.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/java.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/javascript-jquery.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/javascript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/javascript.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/json.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/json.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/jsoniq.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/jsoniq.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/jsp.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/jsp.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/jsx.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/jsx.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/julia.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/julia.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/latex.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/latex.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ledger.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/less.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/less.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/liquid.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/liquid.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/lisp.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/lisp.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/livescript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/livescript.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/logiql.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/logiql.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/lsl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/lsl.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/lua.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/lua.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/luapage.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/luapage.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/lucene.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/lucene.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/makefile.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/makefile.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/mako.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/markdown.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/markdown.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/matlab.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/matlab.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/mel.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/mel.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/mushcode.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/mushcode.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/mushcode_high_rules.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/mushcode_high_rules.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/mysql.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/mysql.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/nix.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/nix.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/objc.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/objectivec.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/objectivec.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ocaml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ocaml.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/pascal.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/pascal.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/perl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/perl.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/pgsql.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/pgsql.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/php.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/php.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/plain_text.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/plain_text.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/powershell.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/powershell.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/praat.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/praat.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/prolog.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/prolog.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/properties.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/properties.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/protobuf.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/protobuf.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/python.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/python.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/r.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/r.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/rdoc.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/rdoc.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/rhtml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/rhtml.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/rst.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ruby.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/ruby.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/rust.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/rust.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/sass.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/sass.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/scad.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/scad.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/scala.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/scala.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/scheme.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/scheme.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/scss.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/scss.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/sh.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/sh.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/sjs.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/sjs.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/smarty.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/smarty.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/snippets.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/snippets.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/soy_template.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/soy_template.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/space.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/space.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/sql.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/sql.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/stylus.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/stylus.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/svg.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/svg.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/tcl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/tcl.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/tex.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/tex.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/text.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/text.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/textile.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/textile.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/tmsnippet.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/toml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/toml.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/twig.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/twig.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/typescript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/typescript.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/vala.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/vala.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/vbscript.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/vbscript.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/velocity.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/velocity.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/verilog.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/verilog.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/vhdl.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/vhdl.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/xml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/xml.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/xquery.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/xquery.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/xslt.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/yaml.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets/yaml.snippets
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/snippets_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/split.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/all.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/all_browser.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/assertions.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/asyncjs/assert.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/asyncjs/async.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/asyncjs/index.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/asyncjs/test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/asyncjs/utils.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/benchmark.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/mockdom.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/mockrenderer.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/test/tests.html
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/ambiance.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/ambiance.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/chaos.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/chaos.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/chrome.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/chrome.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/clouds.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/clouds.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/clouds_midnight.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/clouds_midnight.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/cobalt.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/cobalt.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/crimson_editor.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/crimson_editor.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/dawn.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/dawn.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/dreamweaver.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/dreamweaver.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/eclipse.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/eclipse.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/github.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/github.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/idle_fingers.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/idle_fingers.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/katzenmilch.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/katzenmilch.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/kr_theme.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/kr_theme.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/kuroir.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/kuroir.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/merbivore.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/merbivore.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/merbivore_soft.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/merbivore_soft.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/mono_industrial.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/mono_industrial.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/monokai.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/monokai.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/pastel_on_dark.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/pastel_on_dark.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/solarized_dark.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/solarized_dark.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/solarized_light.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/solarized_light.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/terminal.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/terminal.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/textmate.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/textmate.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/tomorrow.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/tomorrow.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/tomorrow_night.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/tomorrow_night.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/tomorrow_night_blue.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/tomorrow_night_blue.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/tomorrow_night_bright.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/tomorrow_night_bright.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/tomorrow_night_eighties.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/tomorrow_night_eighties.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/twilight.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/twilight.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/vibrant_ink.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/vibrant_ink.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/xcode.css
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/theme/xcode.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/token_iterator.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/token_iterator_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/tokenizer.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/tokenizer_dev.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/tokenizer_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/tooltip.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/undomanager.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/unicode.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/virtual_renderer.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/virtual_renderer_test.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/worker/mirror.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/worker/worker.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/worker/worker_client.js
    lib/gollum/public/gollum/livepreview/js/ace/lib/ace/worker/worker_test.js
    lib/gollum/public/gollum/livepreview/js/jquery.ba-throttle-debounce.min.js
    lib/gollum/public/gollum/livepreview/js/livepreview.js
    lib/gollum/public/gollum/livepreview/js/md_sundown.js
    lib/gollum/public/gollum/livepreview/js/requirejs.min.js
    lib/gollum/public/gollum/livepreview/js/sundown.js
    lib/gollum/public/gollum/livepreview/licenses/ace/LICENSE.txt
    lib/gollum/public/gollum/livepreview/licenses/bootstraponline_gollum/LICENSE.txt
    lib/gollum/public/gollum/livepreview/licenses/debounce/LICENSE-MIT.txt
    lib/gollum/public/gollum/livepreview/licenses/gollum/LICENSE.txt
    lib/gollum/public/gollum/livepreview/licenses/jquery/MIT-LICENSE.txt
    lib/gollum/public/gollum/livepreview/licenses/licenses.txt
    lib/gollum/public/gollum/livepreview/licenses/notepages/LICENSE.txt
    lib/gollum/public/gollum/livepreview/licenses/requirejs/LICENSE.txt
    lib/gollum/public/gollum/livepreview/licenses/retina_display_icon_set/by_sa_3.0_unported_legalcode.txt
    lib/gollum/public/gollum/livepreview/licenses/sizzle/LICENSE.txt
    lib/gollum/public/gollum/livepreview/licenses/sundown/sundown.txt
    lib/gollum/public/gollum/livepreview/licenses/templarian_windowsicons/license.txt
    lib/gollum/public/gollum/livepreview/readme.md
    lib/gollum/templates/compare.mustache
    lib/gollum/templates/create.mustache
    lib/gollum/templates/edit.mustache
    lib/gollum/templates/editor.mustache
    lib/gollum/templates/error.mustache
    lib/gollum/templates/file_view.mustache
    lib/gollum/templates/history.mustache
    lib/gollum/templates/history_authors/gravatar.mustache
    lib/gollum/templates/history_authors/identicon.mustache
    lib/gollum/templates/history_authors/none.mustache
    lib/gollum/templates/latest_changes.mustache
    lib/gollum/templates/layout.mustache
    lib/gollum/templates/livepreview.mustache
    lib/gollum/templates/page.mustache
    lib/gollum/templates/pages.mustache
    lib/gollum/templates/search.mustache
    lib/gollum/templates/searchbar.mustache
    lib/gollum/uri_encode_component.rb
    lib/gollum/views/compare.rb
    lib/gollum/views/create.rb
    lib/gollum/views/edit.rb
    lib/gollum/views/editable.rb
    lib/gollum/views/error.rb
    lib/gollum/views/file_view.rb
    lib/gollum/views/has_page.rb
    lib/gollum/views/history.rb
    lib/gollum/views/latest_changes.rb
    lib/gollum/views/layout.rb
    lib/gollum/views/livepreview.rb
    lib/gollum/views/page.rb
    lib/gollum/views/pages.rb
    lib/gollum/views/search.rb
    licenses/css_tree_menu_thecssninja/license.txt
    licenses/licenses.txt
    licenses/unity_asset_pool/COPYRIGHT
  ]
  # = MANIFEST =
    
    # Single-line step scoper
When /^(.*) within (.*[^:])$/ do |step, parent|
  with_scope(parent) { When step }
end