
        
          def option_defined?(name)
    @options.include? name
  end
end

    
      def self.require_universal_deps
    define_method(:require_universal_deps?) { true }
  end
    
    source 'https://rubygems.org'
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
      out = File.join(output, site + '.txt')
  File.unlink(out) if File.exist?(out)
    
    
class SnifferIMAP < BaseProtocolParser
    
                  # Remove it form the session objects so freeup
              sessions.delete(s[:session])
    
    classNames.each { |name|
	filesIn << clsFile.new_with_sig('Ljava.lang.String;', '#{outputDir}/#{name}.class')
}
    
    signer._invoke('JarSignerMSF','[Ljava.lang.String;',jarsignerOpts)
    
      def parse
vers = [
  '6.1.4',
  '6.1.3',
  '6.1.2',
  '6.1.1',
  '6.1.0',
  '5.3.10',
  '5.3.9',
  '5.3.8',
  '5.3.7',
]
    
      private
    # Use callbacks to share common setup or constraints between actions.
    def set_book
      @book = Book.find(params[:id])
    end
    
    module RuboCop
  module Cop
    class VariableForce
      # This class represents each assignment of a variable.
      class Assignment
        include Branchable
    
              add_offense(node)
        end
    
    module RuboCop
  module Cop
    module Style
      # This cop checks against comparing a variable with multiple items, where
      # `Array#include?` could be used instead to avoid code repetition.
      #
      # @example
      #   # bad
      #   a = 'a'
      #   foo if a == 'a' || a == 'b' || a == 'c'
      #
      #   # good
      #   a = 'a'
      #   foo if ['a', 'b', 'c'].include?(a)
      class MultipleComparison < Cop
        MSG = 'Avoid comparing a variable with multiple items ' \
          'in a conditional, use `Array#include?` instead.'.freeze
    
          expect('.all-text-inputs-hover').to have_ruleset(ruleset)
    end
  end