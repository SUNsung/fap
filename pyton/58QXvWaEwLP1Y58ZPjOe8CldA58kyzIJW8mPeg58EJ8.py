
        
        try:
    import json
except ImportError:
    import simplejson as json
    
    # The checksum algorithm must match with the algorithm in ShellModule.checksum() method
checksum = secure_hash
checksum_s = secure_hash_s
    
            if args.coverage_results:
            path = os.path.join(output_dir, '%s/coverage.json' % job_number)
            url = 'https://api.shippable.com/jobs/%s/jobCoverageReports' % job_id
            download(args, headers, path, url)
            extract_contents(args, path, os.path.join(output_dir, '%s/coverage' % job_number))
    
        if len(result) != 1:
        raise Exception(
            'Received %d items instead of 1 looking for %s in:\n%s' % (
                len(result),
                args.project,
                json.dumps(result, indent=4, sort_keys=True)))
    
        def construct_vault_encrypted_unicode(self, node):
        value = self.construct_scalar(node)
        b_ciphertext_data = to_bytes(value)
        # could pass in a key id here to choose the vault to associate with
        # TODO/FIXME: plugin vault selector
        vault = self._vaults['default']
        if vault.secrets is None:
            raise ConstructorError(context=None, context_mark=None,
                                   problem='found !vault but no vault password provided',
                                   problem_mark=node.start_mark,
                                   note=None)
        ret = AnsibleVaultEncryptedUnicode(b_ciphertext_data)
        ret.vault = vault
        return ret