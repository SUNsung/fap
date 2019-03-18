
        
                  def select_type
            self.class.select_type
          end
    
        class WithConditionalOverrideFlippedAndInheriting < WithConditionalOverride
      layout nil, only: :non_overwritten
    end
    
          # Sign out all active users or scopes. This helper is useful for signing out all roles
      # in one click. This signs out ALL scopes in warden. Returns true if there was at least one logout
      # and false if there was no user logged in on all scopes.
      def sign_out_all_scopes(lock=true)
        users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
          def devise_mapping
        @devise_mapping ||= Devise.mappings[scope_name]
      end
    
    require 'devise/strategies/rememberable'
require 'devise/hooks/rememberable'
require 'devise/hooks/forgetable'
    
          module ClassMethods
        Devise::Models.config(self, :timeout_in)
      end
    end
  end
end

    
      it 'raises #{frozen_error_class} on an untainted, frozen object' do
    o = Object.new.freeze
    lambda { o.taint }.should raise_error(frozen_error_class)
  end
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end
    
    class Profile
  def pod_bin
    File.expand_path('../pod', __FILE__)
  end
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end
    
          # Returns the collection the `for` loop is iterating over.
      #
      # @return [Node] The collection the `for` loop is iterating over
      def collection
        node_parts[1]
      end
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def colon?
        false
      end
    
          # Returns the value of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the value of the hash element
      def value
        node_parts[1]
      end