    # A list of classes that will be extracted into mixins
    # Only the top-level selectors of form .CLASS { ... } are extracted. CLASS must not be used in any other rule definition.
    # This is a work-around for libsass @extend issues
    CLASSES_TO_MIXINS = %w(
      list-unstyled form-inline
    )
    
    task default: :test

    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
                -- Return the time part and the sequence part. OR appears
            -- faster here than addition, but they're equivalent:
            -- time_part has no trailing two bytes, and tail is only
            -- the last two bytes.
            RETURN time_part | tail;
          END
        $$ LANGUAGE plpgsql VOLATILE;
      SQL
    end
    
          it 'renders application layout' do
        get :show, params: { id: 'test', max_id: late.id }
        expect(response).to render_template layout: 'application'
      end
    end
    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
        HTTP.get(source).to_s.split('\n').each do |line|
      next if line.start_with? '#'
      parts = line.split(';').map(&:strip)
      next if parts.size < 2
      codes << [parts[0], parts[1].start_with?('fully-qualified')]
    end
    
        it 'removes the remote accounts\'s statuses and media attachments' do
      expect { bad_status1.reload }.to raise_exception ActiveRecord::RecordNotFound
      expect { bad_status2.reload }.to raise_exception ActiveRecord::RecordNotFound
      expect { bad_attachment.reload }.to raise_exception ActiveRecord::RecordNotFound
    end
  end
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            private
    
          def actual_path
        $PROGRAM_NAME
      end
    end
  end
end

    
            self.description = <<-DESC
          Creates a scaffold for the development of a new Pod named `NAME`
          according to the CocoaPods best practices.
          If a `TEMPLATE_URL`, pointing to a git repo containing a compatible
          template, is specified, it will be used in place of the default one.
        DESC
    
          def run
        update_if_necessary!