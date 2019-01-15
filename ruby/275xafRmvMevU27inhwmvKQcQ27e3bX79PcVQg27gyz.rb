
        
          config.on_event :test_run_finished do
    f.print_worst_offenders
  end
end

    
      matter = matter.join.chomp
  content = \
    if !input_hash['input'] || !input_hash['filter']
      then input_hash['content']
    else '{{ #{input_hash['input']} | ' \
        '#{input_hash['filter']} }}'
    end
    
        # Deletes a machine by UUID.
    #
    # The machine being deleted with this UUID must either be locked
    # by this index or must be unlocked.
    #
    # @param [Entry] entry The entry to delete.
    # @return [Boolean] true if delete is successful
    def delete(entry)
      return true if !entry.id
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                # Don't set the value if it is the unset value, either.
                value = obj.instance_variable_get(key)
                result.instance_variable_set(key, value) if value != UNSET_VALUE
              end
            end
          end
    
    module Vagrant
  module Plugin
    module V2
      # This is the superclass for all V2 plugins.
      class Plugin
        # Special marker that can be used for action hooks that matches
        # all action sequences.
        ALL_ACTIONS = :__all_actions__
    
        # Get a value by the given key.
    #
    # This will evaluate the block given to `register` and return the
    # resulting value.
    def get(key)
      return nil if !@items.key?(key)
      return @results_cache[key] if @results_cache.key?(key)
      @results_cache[key] = @items[key].call
    end
    alias :[] :get
    
      def process_salmon
    SalmonWorker.perform_async(@account.id, payload.force_encoding('UTF-8'))
  end
end

    
      def subscription
    @_subscription ||= @account.subscription(
      api_subscription_url(@account.id)
    )
  end
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
          it 'displays Float::INFINITY as Inf' do
        format('%a', Float::INFINITY).should == 'Inf'
        format('%a', -Float::INFINITY).should == '-Inf'
      end
    
        t.wakeup
    t.value.should == 5
  end
end
    
        $?.should be_an_instance_of Process::Status
    $?.success?.should == true
  end
    
      it 'does not raise an error on a tainted, frozen object' do
    o = Object.new.taint.freeze
    o.taint.should equal(o)
  end
    
      it 'calls #to_path on second argument when passed ?d and a directory' do
    p = mock('path')
    p.should_receive(:to_path).and_return @dir
    Kernel.test(?d, p)
  end
end
    
    class FixPhotosShareVisibilities < ActiveRecord::Migration[4.2]
  class Photo < ApplicationRecord
  end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
    describe ParticipationsController, :type => :controller do
  before do
    allow(@controller).to receive(:current_user).and_return(alice)
    sign_in alice, scope: :user
  end
    
          it 'returns an empty array for a post visible to the user' do
        sign_in(bob, scope: :user)
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body)).to eq([])
      end
    end