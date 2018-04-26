
        
              class_attribute :delivery_methods, default: {}.freeze
      class_attribute :delivery_method, default: :smtp
    
      # Skips the current run on Rubinius using Minitest::Assertions#skip
  private def rubinius_skip(message = '')
    skip message if RUBY_ENGINE == 'rbx'
  end
  # Skips the current run on JRuby using Minitest::Assertions#skip
  private def jruby_skip(message = '')
    skip message if defined?(JRUBY_VERSION)
  end
end

    
      def test_deliver_is_notified
    BaseMailer.welcome.deliver_now
    wait
    
      before do
    Spaceship::Portal::Key.client = mock_client
  end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file  --out=build/cloc.txt')
      end
    end
  end
end

    
    require 'open3'
    
            def run
          if @pod_name.nil?
            # Note: at that point, @wipe_all is always true (thanks to `validate!`)
            # Remove all
            clear_cache
          else
            # Remove only cache for this pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            elsif cache_descriptors.count > 1 && !@wipe_all
              # Ask which to remove
              choices = cache_descriptors.map { |c| '#{@pod_name} v#{c[:version]} (#{pod_type(c)})' }
              index = UI.choose_from_array(choices, 'Which pod cache do you want to remove?')
              remove_caches([cache_descriptors[index]])
            else
              # Remove all found cache of this pod
              remove_caches(cache_descriptors)
            end
          end
        end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
    module RuboCop
  module Cop
    class VariableForce
      # A Variable represents existence of a local variable.
      # This holds a variable declaration node,
      # and some states of the variable.
      class Variable
        VARIABLE_DECLARATION_TYPES =
          (VARIABLE_ASSIGNMENT_TYPES + ARGUMENT_DECLARATION_TYPES).freeze
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)
    
            def nested_comparison?(node)
          if node.or_type?
            node.node_parts.all? { |node_part| comparison? node_part }
          else
            false
          end
        end
    
                  include Something
              def do_something; end
    
          def extract_metrics(path, *keys)
        snapshot.metric_store.extract_metrics(path, *keys)
      end
    end
  end
end

    
          def define_deprecated_writer_for(option, opts, &block)
        define_method(option.write_method) do |value|
          self.class.logger.warn 'DEPRECATION WARNING: The flag #{option.switches} has been deprecated, please use \'--#{opts[:new_flag]}=#{opts[:new_value]}\' instead.'
          LogStash::SETTINGS.set(opts[:new_flag], opts[:new_value])
        end
      end
    end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'margin-top: 11px; ' +
                'margin-right: 12px; ' +
                'margin-left: 13px;'
      bad_rule = 'margin-bottom: null;'
    
      context 'called with three sizes' do
    it 'applies second width to left and right' do
      ruleset = 'position: relative; ' +
                'top: 4px; ' +
                'right: 5px; ' +
                'bottom: 6px; ' +
                'left: 5px;'