
        
            def form_configurable_attributes
      form_configurable_fields.keys
    end
  end
end

    
      def destroy
    @services = current_user.services.find(params[:id])
    @services.destroy
    
      private
    
              # Parse the options
          argv = parse_options(opts)
          return if !argv
          if argv.empty? || argv.length > 2
            raise Vagrant::Errors::CLIInvalidUsage,
              help: opts.help.chomp
          end
    
    module VagrantPlugins
  module CommandCap
    class Command < Vagrant.plugin('2', :command)
      def self.synopsis
        'checks and executes capability'
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