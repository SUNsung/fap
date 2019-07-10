
        
            it 'opens the dry run modal even when clicking on the refresh icon' do
      visit edit_agent_path(agent)
      find('.agent-dry-run-button span.glyphicon').click
      expect(page).to have_text('Event to send (Optional)')
    end
    
            it 'creates new Agents, even if one already exists with the given guid (so that we don't overwrite a user's work outside of the scenario)' do
          agents(:bob_weather_agent).update_attribute :guid, 'a-weather-agent'
    
        @agent1 = Agents::SchedulerAgent.new(name: 'Scheduler 1', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
    @agent2 = Agents::SchedulerAgent.new(name: 'Scheduler 2', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
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

    
      RTLD_GLOBAL = Handle::RTLD_GLOBAL # :nodoc:
  RTLD_LAZY   = Handle::RTLD_LAZY   # :nodoc:
  RTLD_NOW    = Handle::RTLD_NOW    # :nodoc:
end

    
      # Disable automatic flushing of the log to improve performance.
  # config.autoflush_log = false
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
        it 'does not let a user destroy other likes' do
      like2 = eve.like!(@message)
      like_count = Like.count
    
          FactoryGirl.create(:notification, :recipient => alice)
      note = FactoryGirl.create(:notification, :recipient => user2)
    
        context 'on a post you do not partecipate to' do
      it 'says it is an unprocessable request' do
        delete :destroy, params: {post_id: post.id}
        expect(response.code).to eq('422')
      end
    end
  end
end

    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
        def each(&block)
      @cookies.each(&block)
    end