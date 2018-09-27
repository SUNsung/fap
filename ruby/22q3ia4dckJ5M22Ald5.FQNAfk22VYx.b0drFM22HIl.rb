
        
        Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
      [before || '.',
    after || '.',]
end
    
      all_files       = `git ls-files -z`.split('\x0')
  s.files         = all_files.grep(%r!^(exe|lib|rubocop)/|^.rubocop.yml$!)
  s.executables   = all_files.grep(%r!^exe/!) { |f| File.basename(f) }
  s.bindir        = 'exe'
  s.require_paths = ['lib']
    
        s = nil
    homebrew_site_packages = Language::Python.homebrew_site_packages
    user_site_packages = Language::Python.user_site_packages 'python'
    pth_file = user_site_packages/'homebrew.pth'
    instructions = <<-EOS.undent.gsub(/^/, '  ')
      mkdir -p #{user_site_packages}
      echo 'import site; site.addsitedir('#{homebrew_site_packages}')' >> #{pth_file}
    EOS
    
        def self.rm_DS_Store
      paths = Queue.new
      %w[Cellar Frameworks Library bin etc include lib opt sbin share var].
        map { |p| HOMEBREW_PREFIX/p }.each { |p| paths << p if p.exist? }
      workers = (0...Hardware::CPU.cores).map do
        Thread.new do
          begin
            while p = paths.pop(true)
              quiet_system 'find', p, '-name', '.DS_Store', '-delete'
            end
          rescue ThreadError # ignore empty queue error
          end
        end
      end
      workers.map(&:join)
    end
    
          out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
        end
    
        results.map do |name|
      begin
        formula = Formulary.factory(name)
        canonical_name = formula.name
        canonical_full_name = formula.full_name
      rescue
        canonical_name = canonical_full_name = name
      end
      # Ignore aliases from results when the full name was also found
      if aliases.include?(name) && results.include?(canonical_full_name)
        next
      elsif (HOMEBREW_CELLAR/canonical_name).directory?
        pretty_installed(name)
      else
        name
      end
    end.compact
  end
end

    
      def dump_formula_report(key, title)
    formulae = select_formula(key).sort.map do |name, new_name|
      # Format list items of renamed formulae
      if key == :R
        name = pretty_installed(name) if installed?(name)
        new_name = pretty_installed(new_name) if installed?(new_name)
        '#{name} -> #{new_name}'
      else
        installed?(name) ? pretty_installed(name) : name
      end
    end
    
          expect(value_for(user.id, dt)).to eq(0)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
    describe GroupUser do
    
        def action_completed(action_name, status: nil)
      completion_context = FastlaneCore::ActionCompletionContext.context_for_action_name(action_name,
                                                                                         args: ARGV,
                                                                                         status: status)
      FastlaneCore.session.action_completed(completion_context: completion_context)
    end
  end
end

    
        # Some actions have special handling in fast_file.rb, that means we can't directly call the action
    # but we have to use the same logic that is in fast_file.rb instead.
    # That's where this switch statement comes into play
    def run_action_requiring_special_handling(command: nil, parameter_map: nil, action_return_type: nil)
      action_return = nil
      closure_argument_value = nil # only used if the action uses it
    
          context 'as array with spaces in name and directory' do
        let(:path) { ['my file.txt', 'some dir/your file.txt'] }
    
          it 'generates the correct git command with a shell-escaped message' do
        message = 'message with 'quotes' (and parens)'
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: './fastlane/README.md', message: \'#{message}\')
        end').runner.execute(:test)
        expect(result).to eq('git commit -m #{message.shellescape} ./fastlane/README.md')
      end
    end
  end
end

    
          it 'works with multiple ignore patterns' do
        pattern1 = 'Pods/*'
        pattern2 = '../**/*/Xcode*'
        result = Fastlane::FastFile.new.parse('lane :test do
          slather({
            ignore: ['#{pattern1}', '#{pattern2}'],
            proj: 'foo.xcodeproj'
          })
        end').runner.execute(:test)
    
        def help_default_value
      return '#{self.default_value} *'.strip if self.default_value_dynamic
      return '' if self.default_value.nil?
      return '''' if self.default_value.instance_of?(String) && self.default_value.empty?
      return ':#{self.default_value}' if self.default_value.instance_of?(Symbol)
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
    Then /^'([^']*)' should be post (\d+)$/ do |post_text, position|
  stream_element_numbers_content(position).should have_content(post_text)
end
    
    RSpec::Matchers.define :have_value do |expected|
  match do |actual|
    await_condition { actual.value && actual.value.include?(expected) }
  end
    
      def post_path_by_content(text)
    p = Post.find_by_text(text)
    post_path(p)
  end
    
      # fill change password section on the user edit page
  def fill_change_password_section(cur_pass, new_pass, confirm_pass)
    fill_in 'user_current_password', :with => cur_pass
    fill_in 'user_password', :with => new_pass
    fill_in 'user_password_confirmation', :with => confirm_pass
  end
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end
