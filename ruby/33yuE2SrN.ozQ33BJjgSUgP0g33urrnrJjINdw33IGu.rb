
        
          def origin_account
    @account
  end
    
    RSpec.describe ActivityPub::Activity::Block do
  let(:sender)    { Fabricate(:account) }
  let(:recipient) { Fabricate(:account) }
    
      shared_examples 'forbidden for wrong scope' do |wrong_scope|
    let(:scopes) { wrong_scope }
    
    RSpec.describe FollowLimitValidator, type: :validator do
  describe '#validate' do
    before do
      allow_any_instance_of(described_class).to receive(:limit_reached?).with(account) do
        limit_reached
      end
    
      private
    
      describe 'favourite' do
    let(:favourite) { Favourite.create!(account: sender, status: own_status) }
    let(:mail) { NotificationMailer.favourite(own_status.account, Notification.create!(account: receiver.account, activity: favourite)) }
    
      describe '#identifier' do
    let(:source) do
      'module Foo; end'
    end
    
          context 'with a matching symbol' do
        let(:ruby) { 'obj.abc' }
    
              expect_offense(<<~RUBY)
            def some_method(foo, bar)
                                 ^^^ #{bar_message}
                            ^^^ #{foo_message}
            end
          RUBY
        end
      end
    end
    
          it { expect(if_node.modifier_form?).to be_falsey }
    end
    
        context 'as number' do
      it 'will gracefully handle a name given as a number' do
        rendered = project_with_number_as_name
        expect(rendered.name.to_i).to_not equal 0
      end
    end
    
      def is_pane
    @actual.is_a? Tmuxinator::Pane
  end
end

    
    require 'tmuxinator'
require 'factory_bot'
    
      describe '::bootstrap' do
    subject { cli.bootstrap(args) }
    let(:args) { [] }
    
        context 'without project yml' do
      let(:expected) { '#{directory}/new-project.yml' }
      it 'gets the project as path to the yml file' do
        expect(described_class.project('new-project')).to eq expected
      end
    end
  end
    
        # the File::Spec module comes from the PathTools CPAN distribution
    insist { subject.name } == 'perl-PathTools'
  end
    
        npm_flags = []
    settings.each do |key, value|
      # npm lets you specify settings in a .npmrc but the same key=value settings
      # are valid as '--key value' command arguments to npm. Woo!
      logger.debug('Configuring npm', key => value)
      npm_flags += [ '--#{key}', value ]
    end