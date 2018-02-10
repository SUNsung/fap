
        
          # Finds the projects belonging to the user in '@user', limited to either
  # public projects or projects visible to the given user.
  #
  # current_user - When given the list of projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
            # Registers additional pushes to be available.
        #
        # @param [String] name Name of the push.
        # @param [Hash] options List of options for the push.
        def self.push(name, options=nil, &block)
          components.pushes.register(name.to_sym) do
            [block.call, options]
          end
    
          replace_rules file do |rule|
        replace_properties rule do |props|
          props.gsub /(?<!\w)([\w-]+):(.*?);/ do |m|
            prop, vals = $1, split_prop_val.call($2)
            next m unless vals.length >= 2 && vals.any? { |v| v =~ /^[\+\-]\$/ }
            transformed = vals.map { |v| v.strip =~ %r(^\(.*\)$) ? v : '(#{v})' }
            log_transform 'property #{prop}: #{transformed * ' '}', from: 'wrap_calculation'
            '#{prop}: #{transformed * ' '};'
          end
        end
      end
    end
    
        alias log puts
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
        # Provide a wrapper for the SCM that loads a strategy for the user.
    #
    # @param [Rake] context     The context in which the strategy should run
    # @param [Module] strategy  A module to include into the SCM instance. The
    #    module should provide the abstract methods of Capistrano::SCM
    #
    def initialize(context, strategy)
      @context = context
      singleton = class << self; self; end
      singleton.send(:include, strategy)
    end