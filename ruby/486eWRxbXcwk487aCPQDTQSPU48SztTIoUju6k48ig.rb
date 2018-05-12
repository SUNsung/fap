
        
              if options[:type] == :array && (options[:values].blank? || !options[:values].is_a?(Array))
        raise ArgumentError.new('When using :array as :type you need to provide the :values as an Array')
      end
    
      def load_event
    @event = current_user.events.find(params[:id])
  end
end

    
      def destroy
    @job = Delayed::Job.find(params[:id])
    
          def merge!(other)
        other.each do |key, value|
          self[convert_key(key)] = value
        end
        self
      end
    
          # This deletes the block with the given key if it exists.
      def delete(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$.*^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        @value.gsub!(regexp, '')
      end
    
    module VagrantPlugins
  module CommandBox
    module Command
      class Repackage < Vagrant.plugin('2', :command)
        def execute
          opts = OptionParser.new do |o|
            o.banner = 'Usage: vagrant box repackage <name> <provider> <version>'
          end
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
    module Jekyll
    
            def method_argument?
          argument? && %i[def defs].include?(@scope.node.type)
        end
    
                  add_offense(condition)
            end
    
              add_offense(node)
        end
    
            def on_if(node)
          return unless nested_variable_comparison?(node.condition)
          add_offense(node)
        end
    
    RSpec.describe RuboCop::Cop::Style::StringMethods, :config do
  subject(:cop) { described_class.new(config) }
    
              it 'autocorrects the offenses' do
            new_source = autocorrect_source(source)
            expect(new_source).to eq(<<-RUBY.strip_indent)
              #{type} Parent
                #{type} SomeObject
                  URL = %q(http://example.com)