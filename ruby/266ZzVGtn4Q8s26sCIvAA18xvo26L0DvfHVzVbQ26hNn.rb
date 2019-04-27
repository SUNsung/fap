
        
        require 'rubygems'
require 'rake'
require 'rdoc'
require 'date'
require 'yaml'
    
        def arg_is_present?(args, deprecated_argument, message)
      deprecation_message(message) if args.include?(deprecated_argument)
    end
    
          private
    
        def insert_after(index, *names)
      insert assert_index(index) + 1, *names
    end
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
                    raise Errors::VMNoMatchError if vms.empty?
              else
                # String name, just look for a specific VM
                vms << @env.vms[name.to_sym]
                raise Errors::VMNotFoundError, name: name if !vms[0]
              end
            end
          else
            vms = @env.vms_ordered
          end
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                result.instance_variable_set(key, obj.instance_variable_get(key))
              end
            end
          end
    
              @registered.each do |plugin|
            plugin.config.each do |key, klass|
              result[key] = klass
            end
          end
    
                    if provider_to_use && provider_to_use != active_provider
                  # We found an active machine with a provider that doesn't
                  # match the requested provider. Show an error.
                  raise Errors::ActiveMachineWithDifferentProvider,
                    name: active_name.to_s,
                    active_provider: active_provider.to_s,
                    requested_provider: provider_to_use.to_s
                else
                  # Use this provider and exit out of the loop. One of the
                  # invariants [for now] is that there shouldn't be machines
                  # with multiple providers.
                  @logger.info('Active machine found with name #{active_name}. ' +
                               'Using provider: #{active_provider}')
                  provider_to_use = active_provider
                  break
                end
              end
            end
    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a provider for the V2 API. A provider
      # is responsible for creating compute resources to match the needs
      # of a Vagrant-configured system.
      class Provider
        include CapabilityHost