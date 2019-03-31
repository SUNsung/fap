
        
              new_email = resource_params.fetch(:unconfirmed_email)
    
        def resource_params
      params.require(:email_domain_block).permit(:domain)
    end
  end
end

    
        def set_report_note
      @report_note = ReportNote.find(params[:id])
    end
  end
end

    
        render json: web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
    describe 'Kernel#srand' do
  it 'needs to be reviewed for spec completeness'
end

    
      it 'returns true when passed ?R if the argument is readable by the real uid' do
    Kernel.test(?R, @file).should be_true
  end
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
      def render(context)
    config_tag(context.registers[:site].config, @key, @tag, @classname)
  end
end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
          private
    
        # Creating the Redis#brpop command takes into account any
    # configured queue weights. By default Redis#brpop returns
    # data from the first queue that has pending elements. We
    # recreate the queue command each time we invoke Redis#brpop
    # to honor weights and avoid queue starvation.
    def queues_cmd
      if @strictly_ordered_queues
        @queues
      else
        queues = @queues.shuffle.uniq
        queues << TIMEOUT
        queues
      end
    end
    
        def hostname
      ENV['DYNO'] || Socket.gethostname
    end
    
              return WebAction.new(env, route.block)
        end
      end