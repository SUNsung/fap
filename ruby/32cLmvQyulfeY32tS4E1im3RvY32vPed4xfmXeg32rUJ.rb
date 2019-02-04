
        
            expect(gu.notification_level).to eq(NotificationLevels.all[:tracking])
    
          if lounge.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('vip_category_description'),
          title: I18n.t('category.topic_prefix', category: lounge.name),
          category: lounge.name,
          archetype: Archetype.default,
          skip_validations: true
        )
        post = creator.create
    
            staff.topic_id = post.topic.id
        unless staff.save
          puts staff.errors.full_messages
          puts 'Failed to set the Staff category description topic!'
        end
    
        it 'returns an active nav link' do
      stub(self).current_page?('/things') { true }
      nav = nav_link('Things', '/things')
      expect(nav).to be_html_safe
      a = Nokogiri(nav).at('li.active > a[href='/things']')
      expect(a).to be_a Nokogiri::XML::Element
      expect(a.text.strip).to eq('Things')
    end
    
              @bar3 = Agents::DotBar.new(name: 'bar3').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @bar2
            agent.save!
          },
        ]
        @foo.reload
        @bar2.reload
    
          expect(@scheduler.scheduler_agent_jobs.map(&:scheduler_agent)).to eq([@agent2])
    end
    
        it 'should provide the since attribute after the first run' do
      time = (Time.now-1.minute).iso8601
      @checker.memory[:last_event] = time
      @checker.save
      expect(@checker.reload.send(:query_parameters)).to eq({:query => {:since => time}})
    end
  end
    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
          weeks << {
        week: week.to_time.to_i.to_s,
        statuses: Redis.current.get('activity:statuses:local:#{week_id}') || '0',
        logins: Redis.current.pfcount('activity:logins:#{week_id}').to_s,
        registrations: Redis.current.get('activity:accounts:local:#{week_id}') || '0',
      }
    end
    
        # advance scanner to pos after the next match of pattern and return the match
    def scan_next(pattern)
      return unless @s.scan_until(pattern)
      @s.matched
    end
    
          def self.default_generator_root
        File.dirname(__FILE__)
      end
    
    module Sidekiq
  class Client
    
            names.inject(Object) do |constant, name|
          constant.const_defined?(name) ? constant.const_get(name) : constant.const_missing(name)
        end
      rescue NameError
        super
      end
    end
  end
end
    
    module Sidekiq
  module Extensions
    ##
    # Adds 'delay', 'delay_for' and `delay_until` methods to ActionMailer to offload arbitrary email
    # delivery to Sidekiq.  Example:
    #
    #    UserMailer.delay.send_welcome_email(new_user)
    #    UserMailer.delay_for(5.days).send_welcome_email(new_user)
    #    UserMailer.delay_until(5.days.from_now).send_welcome_email(new_user)
    class DelayedMailer
      include Sidekiq::Worker
    
          Sidekiq.logger.debug { 'Re-queueing terminated jobs' }
      jobs_to_requeue = {}
      inprogress.each do |unit_of_work|
        jobs_to_requeue[unit_of_work.queue_name] ||= []
        jobs_to_requeue[unit_of_work.queue_name] << unit_of_work.job
      end
    
          def invoke(*args)
        chain = retrieve.dup
        traverse_chain = lambda do
          if chain.empty?
            yield
          else
            chain.shift.call(*args, &traverse_chain)
          end
        end
        traverse_chain.call
      end
    end
    
          arr = Sidekiq.options[:lifecycle_events][event]
      arr.reverse! if reverse
      arr.each do |block|
        begin
          block.call
        rescue => ex
          handle_exception(ex, { context: 'Exception during Sidekiq lifecycle event.', event: event })
          raise ex if reraise
        end
      end
      arr.clear
    end
  end
end

    
        class << self
      def settings
        self
      end
    
        def erb(content, options = {})
      if content.kind_of? Symbol
        unless respond_to?(:'_erb_#{content}')
          src = ERB.new(File.read('#{Web.settings.views}/#{content}.erb')).src
          WebAction.class_eval('def _erb_#{content}\n#{src}\n end')
        end
      end