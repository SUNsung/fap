
        
        class FixPhotosShareVisibilities < ActiveRecord::Migration[4.2]
  class Photo < ApplicationRecord
  end
    
    def await_condition &condition
  start_time = Time.zone.now
  until condition.call
    return false if (Time.zone.now - start_time) > Capybara.default_max_wait_time
    sleep 0.05
  end
  true
end

    
    World(NavigationHelpers)

    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
            def on_send(node)
          return if node.assignment_method? || node.operator_method?
    
    RSpec.describe RuboCop::Cop::Layout::MultilineArrayBraceLayout, :config do
  subject(:cop) { described_class.new(config) }
    
          DOUBLE_SPLAT = '**'.freeze