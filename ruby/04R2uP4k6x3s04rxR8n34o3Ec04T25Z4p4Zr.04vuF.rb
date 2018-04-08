
        
          private
    
      def xcode
    if instance_variable_defined?(:@xcode)
      @xcode
    elsif MacOS::Xcode.installed?
      @xcode = MacOS::Xcode.version
      @xcode += ' => #{MacOS::Xcode.prefix}' unless MacOS::Xcode.default_prefix?
      @xcode
    end
  end
    
        if ARGV.include?('--pinned') || ARGV.include?('--versions')
      filtered_list
    elsif ARGV.named.empty?
      if ARGV.include? '--full-name'
        full_names = Formula.installed.map(&:full_name).sort do |a, b|
          if a.include?('/') && !b.include?('/')
            1
          elsif !a.include?('/') && b.include?('/')
            -1
          else
            a <=> b
          end
        end
        puts_columns full_names
      else
        ENV['CLICOLOR'] = nil
        exec 'ls', *ARGV.options_only << HOMEBREW_CELLAR
      end
    elsif ARGV.verbose? || !$stdout.tty?
      exec 'find', *ARGV.kegs.map(&:to_s) + %w[-not -type d -print]
    else
      ARGV.kegs.each { |keg| PrettyListing.new keg }
    end
  end
    
        names = @@remote_tap_formulae['#{user}/#{repo}']
    user = user.downcase if user == 'Homebrew' # special handling for the Homebrew organization
    names.select { |name| rx === name }.map { |name| '#{user}/#{repo}/#{name}' }
  rescue GitHub::HTTPNotFoundError => e
    opoo 'Failed to search tap: #{user}/#{repo}. Please run `brew update`'
    []
  rescue GitHub::Error => e
    SEARCH_ERROR_QUEUE << e
    []
  end
    
        def initialize(filters = nil)
      @filters = filters ? filters.dup : []
    end
    
    desc 'Deploy a new release.'
task :deploy do
  set(:deploying, true)
  %w{ starting started
      updating updated
      publishing published
      finishing finished }.each do |task|
    invoke 'deploy:#{task}'
  end
end
task default: :deploy

    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-color: #0f0; ' +
                'border-right-color: #ff0; ' +
                'border-left-color: #00f;'
      bad_rule = 'border-bottom-color: null;'
    
      context 'expands plain buttons' do
    it 'finds selectors' do
      list = @buttons_list.join(', ')
      ruleset = 'content: #{list};'
    
      context 'called with no prefixes' do
    it 'outputs the spec' do
      rule = 'appearance: none;'