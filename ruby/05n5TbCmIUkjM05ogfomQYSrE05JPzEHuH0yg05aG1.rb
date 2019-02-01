
        
            def puts(*args)
      STDERR.puts *args unless @silence
    end
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
        it 'returns a 401 for a private post when logged out' do
      bob.like!(@message)
      sign_out :user
      get :index, params: {post_id: @message.id}, format: :json
      expect(response.status).to eq(401)
    end
  end
    
        # @param options [{Symbol => Object}] The options hash. See
    #   {file:SASS_REFERENCE.md#Options the Sass options documentation}.
    # @param parent [Environment] See \{#parent}
    def initialize(parent = nil, options = nil)
      @parent = parent
      @options = options || (parent && parent.options) || {}
      @stack = @parent.nil? ? Sass::Stack.new : nil
      @caller = nil
      @content = nil
      @filename = nil
      @functions = nil
      @mixins = nil
      @selector = nil
      @vars = nil
    end
    
    module Sass::Exec
  # The abstract base class for Sass executables.
  class Base
    # @param args [Array<String>] The command-line arguments
    def initialize(args)
      @args = args
      @options = {}
    end
    
        # Whether path is likely to be meant as the destination
    # in a source:dest pair.
    def probably_dest_dir?(path)
      return false unless path
      return false if colon_path?(path)
      Sass::Util.glob(File.join(path, '*.s[ca]ss')).empty?
    end
    
          # A hash from file extensions to the syntaxes for those extensions.
      # The syntaxes must be `:sass` or `:scss`.
      #
      # This can be overridden by subclasses that want normal filesystem importing
      # with unusual extensions.
      #
      # @return [{String => Symbol}]
      def extensions
        {'sass' => :sass, 'scss' => :scss}
      end