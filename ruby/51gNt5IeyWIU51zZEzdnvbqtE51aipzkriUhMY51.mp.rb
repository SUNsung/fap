
        
          def self.installed
    Dir['#{store_path}/**/index.json'].
      map { |file| file[%r{/([^/]*)/index\.json\z}, 1] }.
      sort!.
      map { |path| all_versions.find { |doc| doc.path == path } }.
      compact
  end
    
          def as_json
        json = { name: name, slug: slug, type: type }
        json[:links] = links if links.present?
        json[:version] = version if version.present? || defined?(@version)
        json[:release] = release if release.present?
        json
      end
    
        SPLIT_INTS = /(?<=\d)\.(?=[\s\d])/.freeze
    
        def at_xpath(*args)
      doc.at_xpath(*args)
    end
    
        def inheritable_copy
      self.class.new @filters
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
          str.truncate(max_length).ljust(max_length) << tag.to_s
    end
    
          base = path
      dest = url.path
    
      private
    
        def set_account_moderation_note
      @account_moderation_note = AccountModerationNote.find(params[:id])
    end
  end
end

    
        def destroy
      authorize @custom_emoji, :destroy?
      @custom_emoji.destroy!
      log_action :destroy, @custom_emoji
      flash[:notice] = I18n.t('admin.custom_emojis.destroyed_msg')
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
          @domain_block = DomainBlock.new(resource_params)
    
          @email_domain_block = EmailDomainBlock.new(resource_params)
    
        private
    
        def pos
      byte_to_str_pos @s.pos
    end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
        # @todo If a command is run inside another one some settings which where
    #       true might return false.
    #
    # @todo We should probably not even load colored unless needed.
    #
    # @todo Move silent flag to CLAide.
    #
    # @note It is important that the commands don't override the default
    #       settings if their flag is missing (i.e. their value is nil)
    #
    def initialize(argv)
      super
      config.silent = argv.flag?('silent', config.silent)
      config.verbose = self.verbose? unless verbose.nil?
      unless self.ansi_output?
        Colored2.disable!
        String.send(:define_method, :colorize) { |string, _| string }
      end
    end
    
        it 'registers an offense for one hash parameter with braces and multiple ' \
       'keys' do
      expect_offense(<<-RUBY.strip_indent)
        where({ x: 1, foo: 'bar' })
              ^^^^^^^^^^^^^^^^^^^^ Redundant curly braces around a hash parameter.
      RUBY
    end
  end
    
      include_examples 'multiline literal brace layout' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
    
          it 'allows closing brace on different line from multi-line element' do
        expect_no_offenses(construct(false, a, make_multi(multi), true))
      end
    
          it 'detects closing brace on separate line from last element' do
        inspect_source(source)
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
          # Checks whether this node is an `if` statement. (This is not true of
      # ternary operators and `unless` statements.)
      #
      # @return [Boolean] whether the node is an `if` statement
      def if?
        keyword == 'if'
      end