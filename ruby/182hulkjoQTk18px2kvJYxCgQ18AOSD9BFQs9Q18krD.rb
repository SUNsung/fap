
        
            response = ActionDispatch::TestResponse.create(200, { 'Content-Type' => 'application/json' }, '{ 'foo': 'fighters' }')
    assert_equal({ 'foo' => 'fighters' }, response.parsed_body)
  end
    
        def show
      render plain: 'Only for loooooong credentials'
    end
    
            case method
        when NilClass
          raise 'Delivery method cannot be nil'
        when Symbol
          if klass = delivery_methods[method]
            mail.delivery_method(klass, (send(:'#{method}_settings') || {}).merge(options || {}))
          else
            raise 'Invalid delivery method #{method.inspect}'
          end
        else
          mail.delivery_method(method)
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
    
            def initialize_test_deliveries
          set_delivery_method :test
          @old_perform_deliveries = ActionMailer::Base.perform_deliveries
          ActionMailer::Base.perform_deliveries = true
          ActionMailer::Base.deliveries.clear
        end
    
    require 'active_support/testing/autorun'
require 'active_support/testing/method_call_assertions'
require 'action_mailer'
require 'action_mailer/test_case'
    
    class I18nTestMailer < ActionMailer::Base
  configure do |c|
    c.assets_dir = ''
  end
    
          def sanitized_opts(opts, is_safe)
        if is_safe
          Hash[[
            [:startinline, opts.fetch(:startinline, nil)],
            [:hl_lines,    opts.fetch(:hl_lines, nil)],
            [:linenos,     opts.fetch(:linenos, nil)],
            [:encoding,    opts.fetch(:encoding, 'utf-8')],
            [:cssclass,    opts.fetch(:cssclass, nil)],
          ].reject { |f| f.last.nil? }]
        else
          opts
        end
      end
    
    strlen = mimes.keys.max_by(&:length).length
output = ''
output << '# Woah there. Do not edit this file directly.\n'
output << '# This file is generated automatically by script/vendor-mimes.\n\n'
mimes = mimes.sort_by { |k,v| k }
output << mimes.map { |mime,extensions| '#{mime.ljust(strlen)} #{extensions.join(' ')}' }.join('\n')
    
      class FeatureTopicUsers < Jobs::Base
    
          message = TestMailer.send_test(args[:to_address])
      Email::Sender.new(message, :test_message).send
    end