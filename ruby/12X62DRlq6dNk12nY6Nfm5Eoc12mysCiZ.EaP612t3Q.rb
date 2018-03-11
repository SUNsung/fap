
        
        EOS
end
    
    def report_apps
  running = Set.new
  @app_names.zip(@bundle_ids, @unix_ids).each do |app_name, bundle_id, _unix_id|
    next if excluded_bundle_id bundle_id
    next if excluded_app_name app_name
    bundle_id.gsub!(%r{^(missing value)$}, '<\1>')
    running.add '#{bundle_id}\t#{app_name}'
  end
    
        it 'leaves the domains status and attachements, but clears media' do
      expect { bad_status1.reload }.not_to raise_error
      expect { bad_status2.reload }.not_to raise_error
      expect { bad_attachment.reload }.not_to raise_error
      expect(bad_attachment.file.exists?).to be false
    end
  end
end

    
        #
    # @param ips [String] IP range(s)
    # @return [true] if actions on ips are allowed.
    # @return [false] if actions are not allowed on ips.
    def allow_actions_on?(ips)
      return true unless limit_to_network
      return true unless boundary
      return true if boundary.empty?
      boundaries = Shellwords.split(boundary)
      return true if boundaries.empty? # It's okay if there is no boundary range after all
      given_range = Rex::Socket::RangeWalker.new(ips)
      return false unless given_range # Can't do things to nonexistant IPs
      allowed = false
      boundaries.each do |boundary_range|
        ok_range = Rex::Socket::RangeWalker.new(boundary)
        allowed  = true if ok_range.include_range? given_range
      end
      return allowed
    end
    
        inp.attributes.keys.each do |ikey|
      if (ikey.downcase == 'value')
        inp[ikey] = ''
        next
      end
    
            when :err
          case s[:last]
            when :pass
              # Oops got a -ERR after a pass so its crap ignore the pass
              # But report it, might be helpfull for guessing :-)
    
    classNames.each { |name|
	filesIn << clsFile.new_with_sig('Ljava.lang.String;', '#{outputDir}/#{name}.class')
}
    
          private
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
        # Fetch a var from the context
    # @param [Symbol] variable The variable to fetch
    # @param [Object] default  The default value if not found
    #
    def fetch(*args)
      context.fetch(*args)
    end
    
          describe 'setting an internal roles filter' do
        subject { dsl.roles(:app) }
        it 'ignores it' do
          dsl.set :filter, roles: :web
          expect(subject.map(&:hostname)).to eq(['example3.com', 'example4.com'])
        end
      end
    
          expect('.border-style-alternate').to have_rule(rule)
    end
  end
    
          expect('.all-text-inputs-invalid').to have_ruleset(ruleset)
    end
  end
end
