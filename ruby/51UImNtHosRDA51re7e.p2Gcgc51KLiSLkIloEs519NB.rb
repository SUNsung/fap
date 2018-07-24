
        
              def force_equality?(value)
        coder.respond_to?(:object_class) && value.is_a?(coder.object_class)
      end
    
        firm.reload
    assert_not_predicate firm.clients, :loaded?
    assert_queries(1) do
      assert_equal true, firm.clients.include?(client)
    end
    assert_not_predicate firm.clients, :loaded?
  end
    
        def private_method
      'I am Jack's innermost fears and aspirations'
    end
    
    require 'test_helper'
require 'stubs/test_connection'
require 'stubs/room'
    
          assert_equal [ -1, {}, [] ], response
    end
  end
    
          assert_kind_of ChatChannel, channel
      assert_equal 1, channel.room.id
    end
  end
    
          events = []
      ActiveSupport::Notifications.subscribe 'broadcast.action_cable' do |*args|
        events << ActiveSupport::Notifications::Event.new(*args)
      end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
          # `{{ site.related_posts }}` is how posts can get posts related to
      # them, either through LSI if it's enabled, or through the most
      # recent posts.
      # We should remove this in 4.0 and switch to `{{ post.related_posts }}`.
      def related_posts
        return nil unless @current_document.is_a?(Jekyll::Document)
        @current_document.related_posts
      end
      attr_writer :current_document
    
            if exp.is_a?(Regexp)
          entry_path =~ exp
    
      def delete_from_facebook(url, body)
    Faraday.delete(url, body)
  end
end

    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)