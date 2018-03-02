
        
          def merge(*args)
    @settings.merge(*args)
    self
  end
    
      def repo_var
    @repo_var ||= tap.path.to_s.
        strip_prefix(Tap::TAP_DIRECTORY.to_s).
        tr('^A-Za-z0-9', '_').
        upcase
  end
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
    class Devise::PasswordsController < DeviseController
  prepend_before_action :require_no_authentication
  # Render the #edit only if coming from a reset password email link
  append_before_action :assert_reset_token_passed, only: :edit
    
                if respond_to?(:helper_method)
              helper_method 'current_#{group_name}', 'current_#{group_name.to_s.pluralize}', '#{group_name}_signed_in?'
            end
          METHODS
        end
      end
    
      it 'yields every element of self' do
    ret = []
    @set.send(@method) { |x| ret << x }
    ret.sort.should == ['one', 'two', 'three'].sort
  end
    
        bug9187 = '[ruby-core:58728] [Bug #9187]'
    
      it 'auto-detects base 8 via leading 0 when base = 0' do
    '01778'.to_i(0).should == 0177
    '-01778'.to_i(0).should == -0177
  end
    
          raise <<MSG if @args.empty?
What files should I watch? Did you mean something like:
    #{@default_syntax} --watch input.#{@default_syntax}:output.css
    #{@default_syntax} --watch input-dir:output-dir
MSG
    
          # Find a Sass file, if it exists.
      #
      # This is the primary entry point of the Importer.
      # It corresponds directly to an `@import` statement in Sass.
      # It should do three basic things:
      #
      # * Determine if the URI is in this importer's format.
      #   If not, return nil.
      # * Determine if the file indicated by the URI actually exists and is readable.
      #   If not, return nil.
      # * Read the file and place the contents in a {Sass::Engine}.
      #   Return that engine.
      #
      # If this importer's format allows for file extensions,
      # it should treat them the same way as the default {Filesystem} importer.
      # If the URI explicitly has a `.sass` or `.scss` filename,
      # the importer should look for that exact file
      # and import it as the syntax indicated.
      # If it doesn't exist, the importer should return nil.
      #
      # If the URI doesn't have either of these extensions,
      # the importer should look for files with the extensions.
      # If no such files exist, it should return nil.
      #
      # The {Sass::Engine} to be returned should be passed `options`,
      # with a few modifications. `:syntax` should be set appropriately,
      # `:filename` should be set to `uri`,
      # and `:importer` should be set to this importer.
      #
      # @param uri [String] The URI to import.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` that's currently being resolved.
      #   This is safe for subclasses to modify destructively.
      #   Callers should only pass in a value they don't mind being destructively modified.
      # @return [Sass::Engine, nil] An Engine containing the imported file,
      #   or nil if it couldn't be found or was in the wrong format.
      def find(uri, options)
        Sass::Util.abstract(self)
      end
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
    (deny default)
EOS
    
            # Split out the targets into app and test targets
        test_targets, app_targets = project.native_targets.
                              sort_by { |t| t.name.downcase }.
                              partition(&:test_target_type?)
    
            def initialize(argv)
          @name = argv.shift_argument
          @template_url = argv.option('template-url', TEMPLATE_REPO)
          super
          @additional_args = argv.remainder!
        end
    
            def yellow
          @color = :yellow
        end
      end
    
          def stage_definitions
        stage_config_path.join('*.rb')
      end
    
        # @abstract
    #
    # Create a (new) clone of the remote-repository on the deployment target
    #
    # @return void
    #
    def clone
      raise NotImplementedError, 'Your SCM strategy module should provide a #clone method'
    end
    
        return captured_stdout.string, captured_stderr.string
  ensure
    $stdout = orig_stdout
    $stderr = orig_stderr
  end
end
