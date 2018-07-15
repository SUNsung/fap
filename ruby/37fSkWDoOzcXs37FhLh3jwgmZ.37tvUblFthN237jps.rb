
        
          def remote_url
    object.remote_url.presence
  end
    
    module Hbc
  class DSL
    class Container
      VALID_KEYS = Set.new [
        :type,
        :nested,
      ]
    
        used_formulae_missing = false
    used_formulae = begin
      ARGV.formulae
    rescue FormulaUnavailableError => e
      opoo e
      used_formulae_missing = true
      # If the formula doesn't exist: fake the needed formula object name.
      ARGV.named.map { |name| OpenStruct.new name: name, full_name: name }
    end
    
      raise
end
    
        validate :any_searchfield_present?
    
        def path_for(file)
      return file.path if file.is_a?(File)
      return file if file.is_a?(String)
    end
    
    module Sass
  # Runs a SassScript read-eval-print loop.
  # It presents a prompt on the terminal,
  # reads in SassScript expressions,
  # evaluates them,
  # and prints the result.
  class Repl
    # @param options [{Symbol => Object}] An options hash.
    def initialize(options = {})
      @options = options
    end