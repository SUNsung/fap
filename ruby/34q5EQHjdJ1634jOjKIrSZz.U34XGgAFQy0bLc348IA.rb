
        
          attr_accessor :output_buffer
  attr_reader :request
    
          # The instance of ActionView::Base that is used by +render+.
      def view
        @view ||= begin
          view = @controller.view_context
          view.singleton_class.include(_helpers)
          view.extend(Locals)
          view.rendered_views = rendered_views
          view.output_buffer = output_buffer
          view
        end
      end
    
        # Use the logger configured for ActionMailer::Base.
    def logger
      ActionMailer::Base.logger
    end
  end
end
    
    module ActionMailer
  # Provides the option to parameterize mailers in order to share instance variable
  # setup, processing, and common headers.
  #
  # Consider this example that does not use parameterization:
  #
  #   class InvitationsMailer < ApplicationMailer
  #     def account_invitation(inviter, invitee)
  #       @account = inviter.account
  #       @inviter = inviter
  #       @invitee = invitee
  #
  #       subject = '#{@inviter.name} invited you to their Basecamp (#{@account.name})'
  #
  #       mail \
  #         subject:   subject,
  #         to:        invitee.email_address,
  #         from:      common_address(inviter),
  #         reply_to:  inviter.email_address_with_name
  #     end
  #
  #     def project_invitation(project, inviter, invitee)
  #       @account = inviter.account
  #       @project = project
  #       @inviter = inviter
  #       @invitee = invitee
  #       @summarizer = ProjectInvitationSummarizer.new(@project.bucket)
  #
  #       subject = '#{@inviter.name.familiar} added you to a project in Basecamp (#{@account.name})'
  #
  #       mail \
  #         subject:   subject,
  #         to:        invitee.email_address,
  #         from:      common_address(inviter),
  #         reply_to:  inviter.email_address_with_name
  #     end
  #
  #     def bulk_project_invitation(projects, inviter, invitee)
  #       @account  = inviter.account
  #       @projects = projects.sort_by(&:name)
  #       @inviter  = inviter
  #       @invitee  = invitee
  #
  #       subject = '#{@inviter.name.familiar} added you to some new stuff in Basecamp (#{@account.name})'
  #
  #       mail \
  #         subject:   subject,
  #         to:        invitee.email_address,
  #         from:      common_address(inviter),
  #         reply_to:  inviter.email_address_with_name
  #     end
  #   end
  #
  #   InvitationsMailer.account_invitation(person_a, person_b).deliver_later
  #
  # Using parameterized mailers, this can be rewritten as:
  #
  #   class InvitationsMailer < ApplicationMailer
  #     before_action { @inviter, @invitee = params[:inviter], params[:invitee] }
  #     before_action { @account = params[:inviter].account }
  #
  #     default to:       -> { @invitee.email_address },
  #             from:     -> { common_address(@inviter) },
  #             reply_to: -> { @inviter.email_address_with_name }
  #
  #     def account_invitation
  #       mail subject: '#{@inviter.name} invited you to their Basecamp (#{@account.name})'
  #     end
  #
  #     def project_invitation
  #       @project    = params[:project]
  #       @summarizer = ProjectInvitationSummarizer.new(@project.bucket)
  #
  #       mail subject: '#{@inviter.name.familiar} added you to a project in Basecamp (#{@account.name})'
  #     end
  #
  #     def bulk_project_invitation
  #       @projects = params[:projects].sort_by(&:name)
  #
  #       mail subject: '#{@inviter.name.familiar} added you to some new stuff in Basecamp (#{@account.name})'
  #     end
  #   end
  #
  #   InvitationsMailer.with(inviter: person_a, invitee: person_b).account_invitation.deliver_later
  module Parameterized
    extend ActiveSupport::Concern
    
          private
    
        assert_equal(2, @logger.logged(:debug).size)
    assert_match(/BaseMailer#welcome: processed outbound mail in [\d.]+ms/, @logger.logged(:debug).first)
    assert_match(/Welcome/, @logger.logged(:debug).second)
  ensure
    BaseMailer.deliveries.clear
  end
    
        def mail_with_defaults(&block)
      mail(to: 'test@localhost', from: 'tester@example.com',
            subject: 'using helpers', &block)
    end
end
    
      def contents
    data = ''
    path.open('rb') do |f|
      loop do
        line = f.gets
        break if line.nil? || line =~ /^__END__$/
      end
      while line = f.gets
        data << line
      end
    end
    data
  end
end
    
    class MysqlRequirement < Requirement
  fatal true
  satisfy do
    odisabled('MysqlRequirement', ''depends_on \'mysql\''')
  end
end
    
        def yielder
      if instance_variable_defined?(:@satisfied)
        @satisfied
      elsif @options[:build_env]
        require 'extend/ENV'
        ENV.with_build_environment { yield @proc }
      else
        yield @proc
      end
    end
  end
    
    module Jekyll
    
        def render(context)
      file_dir = (context.registers[:site].source || 'source')
      file_path = Pathname.new(file_dir).expand_path
      file = file_path + @file
    
      test 'defined job that uses a :path where none is explicitly set' do
    Whenever.stubs(:path).returns('/my/path')
    
      should 'call run w/ all role args for servers w/ >1 role' do
    @capistrano.stubs(:role_names_for_host).with(@mock_server1).returns([:role1, :role3])
    @capistrano.stubs(:whenever_servers).returns([@mock_server1])
    roles = [:role1, :role2, :role3]
    @capistrano.stubs(:whenever_options).returns({:roles => roles})
    
      test 'various days at a various aligned times using a rake task' do
    output = Whenever.cron \
    <<-file
      set :job_template, nil
      set :path, '/your/path'
      every 'mon,wed,fri', :at => '5:02am, 3:02pm' do
        rake 'blah:blah'
      end
    file