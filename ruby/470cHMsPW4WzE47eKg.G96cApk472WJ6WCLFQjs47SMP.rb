
        
          it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
              expect(weather_agent_diff.schedule.updated).to eq('6pm')
          expect(weather_agent_diff.keep_events_for.current).to eq(45.days)
          expect(weather_agent_diff.keep_events_for.updated).to eq(2.days.to_s)
          expect(weather_agent_diff.disabled.updated).to eq('true')
          expect(weather_agent_diff.options.updated).to eq(weather_agent_options.merge('api_key' => 'foo'))
        end
    
      describe '#schedule_scheduler_agents' do
    it 'registers active SchedulerAgents' do
      @scheduler.schedule_scheduler_agents
    
      describe '#check' do
    it 'should not emit events on its first run' do
      expect { @checker.check }.to change { Event.count }.by(0)
      expect(@checker.memory[:last_event]).to eq '2014-04-17T10:25:31.000+02:00'
    end
    it 'should check that initial run creates an event' do
      @checker.memory[:last_event] = '2014-04-17T10:25:31.000+02:00'
      expect { @checker.check }.to change { Event.count }.by(1)
    end
  end
    
      describe '#receive' do
    it 'sends a message' do
      stub(HTTParty).post { {'id' => 1, 'message' => 'blah', 'title' => 'blah','source_name' => 'Custom Notification'} }
      @checker.receive([@event])
    end
    
    # call-seq:
#   Digest(name) -> digest_subclass
#
# Returns a Digest subclass by +name+ in a thread-safe manner even
# when on-demand loading is involved.
#
#   require 'digest'
#
#   Digest('MD5')
#   # => Digest::MD5
#
#   Digest(:SHA256)
#   # => Digest::SHA256
#
#   Digest(:Foo)
#   # => LoadError: library not found for class Digest::Foo -- digest/foo
def Digest(name)
  const = name.to_sym
  Digest::REQUIRE_MUTEX.synchronize {
    # Ignore autoload's because it is void when we have #const_missing
    Digest.const_missing(const)
  }
rescue LoadError
  # Constants do not necessarily rely on digest/*.
  if Digest.const_defined?(const)
    Digest.const_get(const)
  else
    raise
  end
end

    
    have_header('sys/cdefs.h')
    
    #ifdef HAVE_LONG_LONG
#define INTEGER2NUM(n) \
    (FIXNUM_MAX < (n) ? ULL2NUM(n) : \
     FIXNUM_MIN > (LONG_LONG)(n) ? LL2NUM(n) : \
     LONG2FIX(n))
#else
#define INTEGER2NUM(n) \
    (FIXNUM_MAX < (n) ? ULONG2NUM(n) : \
     FIXNUM_MIN > (long)(n) ? LONG2NUM(n) : \
     LONG2FIX(n))
#endif
    
        # Calculate the necessary offset and for each union member with the given
    # +types+
    def set_ctypes(types)
      @ctypes = types
      @offset = Array.new(types.length, 0)
      @size   = self.class.size types
    end
  end
end
    
    # SPECS ===============================================================
    
          def self.random_token
        SecureRandom.base64(TOKEN_LENGTH)
      end
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def handle(hash)
        was = hash.dup
        hash.replace escape(hash)
        was
      end
    
      it 'returns the sorted config parts' do
    expect(subject.config_parts).to eq(ordered_config_parts)
  end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
    shared_examples 'logstash update' do |logstash|
  describe 'logstash-plugin update on #{logstash.hostname}' do
    before :each do
      logstash.install({:version => LOGSTASH_VERSION})
    end
    
            selected = if options[:match_path].is_a? Regexp
                     request.fullpath =~ options[:match_path]
                   elsif options[:match_path]
                     request.fullpath.starts_with?('#{spree.admin_path}#{options[:match_path]}')
                   else
                     args.include?(controller.controller_name.to_sym)
                   end
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end
    
          @@stock_item_attributes = [
        :id, :count_on_hand, :backorderable, :lock_version, :stock_location_id,
        :variant_id
      ]