
        
            def matching_username
      Account.where(Account.arel_table[:username].lower.eq username.to_s.downcase)
    end
    
        # specify git tag or commit hash here
    def source_tag
      nil
    end
    
        respond_to do |format|
      format.html do
        serializable_resource = ActiveModelSerializers::SerializableResource.new(InitialStatePresenter.new(initial_state_params), serializer: InitialStateSerializer)
        @initial_state_json   = serializable_resource.to_json
      end
    
          expect(response).to redirect_to(settings_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
        uninstall quit: 'bundle.id.goes.here'
    
    module Hardware
  describe CPU do
    describe '::type' do
      it 'returns the current CPU's type as a symbol, or :dunno if it cannot be detected' do
        expect(
          [
            :intel,
            :ppc,
            :dunno,
          ],
        ).to include(described_class.type)
      end
    end
    
      def login!
    print 'GitHub User: '
    ENV['HOMEBREW_GITHUB_API_USERNAME'] = $stdin.gets.chomp
    print 'Password: '
    ENV['HOMEBREW_GITHUB_API_PASSWORD'] = noecho_gets.chomp
    puts
  end
    
        if ARGV.dry_run?
      if ARGV.include? '--strict'
        ohai 'brew audit --strict #{formula.path.basename}'
      elsif ARGV.include? '--audit'
        ohai 'brew audit #{formula.path.basename}'
      end
    else
      failed_audit = false
      if ARGV.include? '--strict'
        system HOMEBREW_BREW_FILE, 'audit', '--strict', formula.path
        failed_audit = !$CHILD_STATUS.success?
      elsif ARGV.include? '--audit'
        system HOMEBREW_BREW_FILE, 'audit', formula.path
        failed_audit = !$CHILD_STATUS.success?
      end
      if failed_audit
        formula.path.atomic_write(backup_file)
        odie 'brew audit failed!'
      end
    end
    
            def log_level(name, options = {})
          if options[:prepend]
            level = log_levels.values.min
            level = level.nil? ? 0 : level - 1
          else
            level = log_levels.values.max
            level = level.nil? ? 0 : level + 1
          end
          log_levels.update(name => level)
          define_logger(name)
        end
    
        # @see \{MediaQuery#to\_a}
    def to_a
      res = []
      res += modifier
      res << ' ' unless modifier.empty?
      res += type
      res << ' and ' unless type.empty? || expressions.empty?
      res += Sass::Util.intersperse(expressions, ' and ').flatten
      res
    end
    
    module Jekyll
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
      context 'called with three widths' do
    it 'applies second width to left and right' do
      rule = 'border-width: 4px 5px 6px'
    
      context 'called with argument (2)' do
    it 'outputs the second value from the default scale' do
      expect('.two-base-one').to have_rule('font-size: 1.5625em')
    end
  end
    
          expect('.size-both').to have_ruleset(rule)
    end
  end