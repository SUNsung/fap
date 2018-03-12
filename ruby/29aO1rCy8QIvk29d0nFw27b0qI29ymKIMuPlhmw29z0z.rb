class HelpersPathsController < ActionController::Base
  paths = ['helpers2_pack', 'helpers1_pack'].map do |path|
    File.join(File.expand_path('../fixtures', __dir__), path)
  end
  $:.unshift(*paths)
    
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
    
      def test_float_hash_random
    assert_hash_random(0.0)
    assert_hash_random(+1.0)
    assert_hash_random(-1.0)
    assert_hash_random(1.72723e-77)
    assert_hash_random(Float::INFINITY, 'Float::INFINITY')
  end
    
    describe :string_unpack_16bit_le_unsigned, shared: true do
  it 'decodes a short with most significant bit set as a positive number' do
    '\x00\xff'.unpack(unpack_format()).should == [65280]
  end
end
    
          sleep
      after_sleep1 = true
    
              private
    
          def get_shallow(*path)
        snapshot.metric_store.get_shallow(*path)
      end