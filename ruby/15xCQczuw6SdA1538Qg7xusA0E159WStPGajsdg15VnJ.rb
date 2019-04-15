
        
          def_delegator :@paths, :each
    
      def pinned?
    path.symlink?
  end
    
        it 'returns false if the environment does not contain :std' do
      expect(env).not_to be_std
    end
  end
    
          def order_time(time)
        [I18n.l(time.to_date), time.strftime('%l:%M %p').strip].join(' ')
      end
    end
  end
end

    
    task default: :test
    
            # Should be overriden if you have areas of your checkout that don't match
        # up to a step within checkout_steps, such as a registration step
        def skip_state_validation?
          false
        end