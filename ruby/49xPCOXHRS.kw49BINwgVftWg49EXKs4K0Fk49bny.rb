        a_length = a_split.length
        b_length = b_split.length
    
        def add(path, content)
      @pages[path] = content
    end
    
            # This returns all the registered guest capabilities.
        #
        # @return [Hash]
        def guest_capabilities
          results = Hash.new { |h, k| h[k] = Registry.new }
    
              @env.action_runner.run(Vagrant::Action.action_box_remove, {
            box_name:     argv[0],
            box_provider: options[:provider],
            box_version:  options[:version],
            force_confirm_box_remove: options[:force],
            box_remove_all_versions: options[:all],
          })
    
        used_formulae_missing = false
    used_formulae = begin
      ARGV.formulae
    rescue FormulaUnavailableError => e
      opoo e
      used_formulae_missing = true
      # If the formula doesn't exist: fake the needed formula object name.
      ARGV.named.map { |name| OpenStruct.new name: name, full_name: name }
    end
    
    class DependencyCollector
  module Compat
    # Define the languages that we can handle as external dependencies.
    LANGUAGE_MODULES = Set[
      :lua, :lua51, :perl, :python, :python3, :ruby
    ].freeze
    
      # The message to show when the requirement is not met.
  def message
    _, _, class_name = self.class.to_s.rpartition '::'
    s = '#{class_name} unsatisfied!\n'
    if cask
      s += <<~EOS
        You can install with Homebrew-Cask:
         brew cask install #{cask}
      EOS
    end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end