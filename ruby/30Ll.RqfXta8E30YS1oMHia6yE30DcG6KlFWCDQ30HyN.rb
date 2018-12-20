
        
        User.seed do |u|
  u.id = -1
  u.name = 'system'
  u.username = 'system'
  u.username_lower = 'system'
  u.password = SecureRandom.hex
  u.active = true
  u.admin = true
  u.moderator = true
  u.approved = true
  u.trust_level = TrustLevel[4]
end
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
        def initialize(*args)
      if args.empty?
        super(*Array.new(9))
      elsif args.length == 1 && args.first.is_a?(Hash)
        args.first.assert_valid_keys URI::Generic::COMPONENT
        super(*args.first.values_at(*URI::Generic::COMPONENT))
      else
        super
      end
    end
    
            css('.multi-line-signature').each do |node|
          node.name = 'pre'
          node.content = node.content.strip
        end
    
            subtitle = at_css('.hero-subtitle').try(:content)
        breadcrumbs = css('.breadcrumbs li').map(&:content)[2..-2]
    
          def root
        css('.nav-index-group').each do |node|
          if heading = node.at_css('.nav-index-group-heading')
            heading.name = 'h2'
          end
          node.parent.before(node.children)
        end
    
            doc
      end
    end
  end
end

    
    Given /^many posts from alice for bob$/ do
  alice = FactoryGirl.create(:user_with_aspect, :username => 'alice', :email => 'alice@alice.alice', :password => 'password', :getting_started => false)
  bob = FactoryGirl.create(:user_with_aspect, :username => 'bob', :email => 'bob@bob.bob', :password => 'password', :getting_started => false)
  connect_users_with_aspects(alice, bob)
  time_fulcrum = Time.now - 40000
  time_interval = 1000
  (1..30).each do |n|
    post = alice.post :status_message, :text => '#{alice.username} - #{n} - #seeded', :to => alice.aspects.where(:name => 'generic').first.id
    post.created_at = time_fulcrum - time_interval
    post.updated_at = time_fulcrum + time_interval
    post.save
    time_interval += 1000
  end
end
    
        worker_count.times do |count|
      template '/data/#{app}/shared/config/sidekiq_#{count}.yml' do
        owner node[:owner_name]
        group node[:owner_name]
        mode 0644
        source 'sidekiq.yml.erb'
        variables({
          :require => '/data/#{app}/current'
        })
      end
    end
    
    $redis = Redis.new
    
    module Sidekiq
  module Generators # :nodoc:
    class WorkerGenerator < ::Rails::Generators::NamedBase # :nodoc:
      desc 'This generator creates a Sidekiq Worker in app/workers and a corresponding test'
    
          ObjectSpace.each_object(File) do |fp|
        begin
          if !fp.closed? && fp.stat.file? && fp.sync && (fp.fcntl(Fcntl::F_GETFL) & append_flags) == append_flags
            to_reopen << fp
          end
        rescue IOError, Errno::EBADF
        end
      end
    
        def matcher
      @matcher ||= compile
    end